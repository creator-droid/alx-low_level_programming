#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int byte, j;
	char *opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	byte = atoi(argv[1]);
	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}
	opcode = (char *)main;
	for (j = 0; j < byte; j++)
	{
		if (j == byte - 1)
		{
			printf("hexadecimal\n", opcode[j]);
		        return;
		}
		printf("Hexadecimal ", opcode[j]);
	}
	return(0);
}
