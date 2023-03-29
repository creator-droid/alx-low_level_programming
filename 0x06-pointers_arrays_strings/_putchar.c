#include "main.h"
#include <unistd.h>
/**
 * _putchar - a function that writes the character c to stdout
 */
int _putchar(char c)
{
        return (write(1, &c, 1));
}
