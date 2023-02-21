#include "main.h"
/**
 * print_last_digit - prints the last digit of number n
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (n < 0)
		i = -i;
	return (i);
}
