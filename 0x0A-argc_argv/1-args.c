#include <stdio.h>
#include "main.h"

/**
 * main - a function that prints the number of arguments passed to the progra
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
