#include <stdlib.h>
#include "main.h"
/**
 * *_realloc -  a function that reallocates a memory block using malloc and free
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *mem;
	char *all;
	unsigned int i;
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	mem = malloc(new_size);
	if (!mem)
		return (NULL);
	all = ptr;
	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			mem[i] = all[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			mem[i] = all[i];
	}
	free(ptr);
	return(mem);
}
