#include "main.h"
/**
 * is_prime_number - func
 * @n: int
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	int x = n / 2;

	for (; x > 1; x--)
	{
		if (n % x == 0)
			return (1);
	}
	return (0);
}
