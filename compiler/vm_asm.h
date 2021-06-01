#ifndef __VM_ASM_H__
#define __VM_ASM_H__

#include <stdlib.h>
#include "intermediate.h"

typedef struct vmarg VMArg;
typedef struct instruction Instruction;
typedef struct vmarg vmarg;
typedef struct avm_table_bucket avm_table_bucket;
typedef struct avm_table avm_table;
typedef struct avm_memcell avm_memcell;
typedef struct userfunc userfunc;

enum vmopcode {
    assign_v, add_v, sub_v,
    mul_v, div_v, mod_v, 
    uminus_v, and_v, or_v, 
    not_v, jeq_v, jne_v, 
    jle_v, jge_v, jlt_v, 
    jgt_v, call_v, pusharg_v, 
    funcenter_v, funcexit_v, newtable_v, 
    tablegetelem_v, tablesetelem_v, nop_v
};

enum vmarg_t {
    label_a = 0,
    global_a = 1,
    formal_a = 2,
    local_a = 3,
    number_a = 4, 
    string_a = 5, 
    bool_a = 6, 
    nil_a = 7, 
    userfunc_a = 8,
    libfunc_a = 9, 
    retval_a = 10
};

struct vmarg {
    enum vmarg_t type;
    unsigned val;
};

struct instruction {
    enum vmopcode    opcode;
    vmarg       result;
    vmarg       arg1;
    vmarg       arg2;
    unsigned    src_line;
};

struct userfunc {
    unsigned    address;
    unsigned    local_size;
    char       *id;
};

double *numConsts;
unsigned totalNumConsts;

char **stringConsts;
unsigned totalStringConsts;

char **namedLibfuncs;
unsigned totalNamedLibfuncs;

userfunc *userFuncs;
unsigned totalUserFuncs;

//  mem

enum avm_memcell_t{
    number_m =0,
    string_m=1,
    bool_m=2,
    table_m=3,
    userfunc_m=4,
    libfunc_m=6,
    nil_m=6,
    undef_m=7
};

struct avm_table;

struct avm_memcell{
    enum avm_memcell_t type;

    union{
        double numVal;
        char* strVal;
        unsigned char boolVar;
        avm_table* tableVal;
        unsigned funcVal;
        char* libfuncVal;
    } data;
};

#define AVM_STACKSIZE 4096
#define AVM_WIPEOUT(m) memset(& (m), 0 ,sizeof(m))

avm_memcell stack[AVM_STACKSIZE];

static void avm_initstack(void);

// Tables

avm_table *avm_tablenew(void);
void       avm_tabledestroy(avm_table* t);
avm_memcell *avm_tablegetelem(avm_memcell *key);
void         avm_tablesetelem(avm_memcell *key, avm_memcell *value);

#define AVM_TABLE_HASHSIZE 211

struct avm_table_bucket {
    avm_memcell       key;
    avm_memcell       value;
    avm_table_bucket *next;
};

struct avm_table {
    unsigned          refCounter;
    avm_table_bucket  *strIndexed[AVM_TABLE_HASHSIZE];
    avm_table_bucket  *numIndexed[AVM_TABLE_HASHSIZE];
    unsigned total;
};

#endif