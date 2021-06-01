#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary.h"

int mk_bin(char *fname)
{
	FILE *f;
	Instruction instr;
	int i;

	f = fopen(fname, "wb");

	if (!f)
	{
		printf("AAAAAAAAAA\n");
		return 0;
	}

	bin = f;

	int magicnum = MAGIC_NUMBER;
	fwrite(&magicnum, sizeof(unsigned), 1, f);

	for (i = 0; i < currInstr; i++)
	{
		instr = instructions[i];

		if (instr.opcode == assign_v)
		{

			fwrite(&instr.opcode, 1, 1, f); 
			fwrite(&instr.result.type, 1, 1, f);
			fwrite(&instr.result.val, 4, 1, f);
			fwrite(&instr.arg1.type, 1, 1, f);
			fwrite(&instr.arg1.val, 4, 1, f);
		}
		else if (instr.opcode == jump_v || instr.opcode == funcenter_v || instr.opcode == funcexit_v)
		{
			fwrite(&instr.opcode, 1, 1, f);
			fwrite(&instr.result.type, 1, 1, f);
			fwrite(&instr.result.val, 4, 1, f);
		}
		else if (instr.opcode == pusharg_v || instr.opcode == call_v)
		{
			fwrite(&instr.opcode, 1, 1, f);
			fwrite(&instr.arg1.type, 1, 1, f);
			fwrite(&instr.arg1.val, 4, 1, f);
		}
		else
		{
			fwrite(&instr.opcode, 1, 1, f);
			fwrite(&instr.result.type, 1, 1, f);
			fwrite(&instr.result.val, 4, 1, f);
			fwrite(&instr.arg1.type, 1, 1, f);
			fwrite(&instr.arg1.val, 4, 1, f);
			fwrite(&instr.arg2.type, 1, 1, f);
			fwrite(&instr.arg2.val, 4, 1, f);
		}
	}
	return 1;
}