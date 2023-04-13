#include <stdlib.h>
#include "main.h"
/**
 * *_memset - a function that allocates memory for an array, using malloc.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return(s);
}
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;

	if (nmemb == 0 || size == 0)
		return (NULL);
	all = malloc(size * nmemb);
	if (all == NULL)
		return (NULL);
	_memset(all, 0, nmemb * size);
	return (all);
}
