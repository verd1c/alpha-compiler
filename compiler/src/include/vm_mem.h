#ifndef __AVM_MEM__
#define __AVM_MEM__

#include "symbol_table.h"

enum avm_memcell_t{
    number_m = 0,
    string_m = 1,
    bool_m = 2,
    table_m = 3,
    userfunc_m = 4,
    libfunc_m = 6,
    nil_m = 6,
    undef_m = 7
};

struct avm_table;

struct avm_memcell{
    enum avm_memcell_t type;

    union{
        double numVal;
        char* strVal;
        unsigned char boolVar;
        struct avm_table* tableVal;
        unsigned funcVal;
        char* libfuncVal;
    } data;
};

#define AVM_STACKSIZE 4096
#define AVM_WIPEOUT(m) memset(& (m), 0 ,sizeof(m))

struct avm_memcell stack[AVM_STACKSIZE];

static void avm_initstack(void);

#endif