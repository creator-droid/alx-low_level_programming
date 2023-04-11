#include "main.h"
#include <stdlib.h>
/**
 * argstostr - a function that concatenates all the arguments of your program.
 */
char *argstostr(int ac, char **av)
{
	int i, n, j = 0, k = 0;
	char *args;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			k++;
	}
	k += ac;

	args = malloc(sizeof(char) * k + 1);
	if (args == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
	for (n = 0; av[i][n]; n++)
	{
		args[j] = av[i][n];
		j++;
	}
	if (args[j] == '\0')
	{
		args[j++] = '\n';
	}
	}
	return(args);
}
