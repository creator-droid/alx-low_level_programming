#include <stdlib.h>
#include "main.h"
/**
 * count_word -  a function that splits a string into words.
 */
int count_word(char *s)
{
	int help, i, j;
	help, j = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			help = 0;
		else if (help == 0)
		{
			help = 1;
			j++;
		}
	}
	return (j);
}
char **strtow(char *str)
{
	char **single, *arr;
	int i, words, start, end;
        k,length,c = 0;
	while (*(str + length))
		length++;
	words = count_word(str);
	if (words == 0)
		return (NULL);
	single = (char **) malloc(sizeof(char *) * (words + 1));
	if (single == NULL)
		return (NULL);
	for (i = 0; i <= length; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				arr = (char *) malloc(sizeof(char) * (c + 1));
				if (arr == NULL)
					return (NULL);
				while (start < end)
					*arr++ = str[start++];
				*arr = '\0';
				single[k] = arr - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}
	single[k] = NULL;
	return(single);
}
