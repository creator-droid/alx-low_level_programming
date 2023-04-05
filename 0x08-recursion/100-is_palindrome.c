#include "main.h"
int check_palin(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome -  a function that returns 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (check_palin(s, 0, _strlen_recursion(s)));
}
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
int check_palin(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
		return (0);
	if (i >= len)
		return (1);
	return (check_palin(s, i + 1, len - 1));
}
