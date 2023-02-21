#include "main.h"
#include <stdlib.h>
/**
 * print_last_digit - prints the last digit of number n
 * @n: the number
 * Return: the last digit
 */
int print_last_digit(int n)
{
	if (n < 10)
		return (n);
	return (abs(n % 10));
}
