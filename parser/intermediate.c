#include "intermediate.h"
#include "tools.h"
#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

int tempcounter=0;
void init_quads(void)
{
	quads = (Quad *)0;
	total = 0;
	currQuad = 0;

	return;
}

void resettemp()
{
	tempcounter = 0;
}

char *newtempname()
{
	char *s;
	s = (char *)malloc(8 * sizeof(char));
	sprintf(s, "_t%d", tempcounter);
	tempcounter++;
	return s;
}

SymTableEntry newTemp(int scope,SymTable *t){

SymTableEntry *sym;
char *tempname=newtempname(tempcounter);

sym=lookup_no_type(t,tempname,scope);

if(sym==NULL){
	sym=insert(t,tempname,scope,yylineno,QUAD);
}else 
	return *sym;

}

void expand(void)
{

	// expand should only be called when full
	assert(total == currQuad);

	Quad *p = (Quad *)malloc(NEW_SIZE);
	if (quads)
	{
		memcpy(p, quads, CURR_SIZE);
		free(quads);
	}
	quads = p;
	total += EXPAND_SIZE;

	return;
}

void emit(
	enum iopcode_t op,
	Expr *result,
	Expr *arg1,
	Expr *arg2,
	unsigned label,
	unsigned line)
{

	if (currQuad == total)
		expand();

	Quad *p = quads + currQuad++;
	p->op = op;
	p->result = result;
	p->arg1 = arg1;
	p->arg2 = arg2;
	p->label = label;
	p->line = line;

	return;
}

// create string const expr
Expr *string_expr(char *str)
{
	Expr *expr = (Expr *)malloc(sizeof(Expr));

	if (!expr)
	{
		alpha_message(stdout, MEMORY_ERROR, "malloc");
		exit(0);
	}

	memset(expr, 0, sizeof(Expr));

	expr->type = CONSTSTRING_E;
	expr->strConst = strdup(str);

	return expr;
}

Expr *bool_expr(unsigned char bool)
{
	Expr *expr = (Expr *)malloc(sizeof(Expr));

	assert(bool == 0 || bool == 1);

	if (!expr)
	{
		alpha_message(stdout, MEMORY_ERROR, "malloc");
		exit(0);
	}

	memset(expr, 0, sizeof(Expr));

	expr->type = CONSTBOOL_E;
	expr->boolConst = bool;

	return expr;
}