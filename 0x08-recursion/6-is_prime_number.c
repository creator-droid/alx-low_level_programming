#include "main.h"

/**
 * is_prime - detects if an input number is a prime number.
 * @n: input number
 */
int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		return(0);
		return (0 + is_prime(n, c + 1));
	}
}
/**
 * is_prime_number - detects if an input number is a prime number.
 */
int is_prime_number(int n)
{
	if (n == 0)
		return (0);
	if (n < 0)
		return (0);
	if (n == 1)
		return (1);
	return (0 + is_prime(n, n + 1));
}
