#include <stdlib.h>
#include "main.h"
/**
 * *malloc_checked - a function that allocates memory using malloc.
 */
void *malloc_checked(unsigned int b)
{
	void *mem;
	mem = malloc(b);
	if (mem == NULL)
		exit(98);
	return (mem);
}
