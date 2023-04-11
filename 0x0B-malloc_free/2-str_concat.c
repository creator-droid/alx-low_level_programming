#include "main.h"
#include <stdlib.h>
/**
 * str_concat - a function that concatenates two strings.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, str;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = str = 0;
	while (s1[i] != '\0')
		i++;
	while (s2[str] != '\0')
		ci++;
	concat = malloc(sizeof(char) * (i + str + 1));
	if (concat == NULL)
		return (NULL);
	i = str = 0;
	while (s1[i] != '\0')
	{
		concat[i] = s1[i];
		i++;
	}
	while (s2[str] != '\0')
	{
		concat[i] = s2[str];
		i++, str++;
	}
	concat[i] = '\0';
	return(concat);
}
