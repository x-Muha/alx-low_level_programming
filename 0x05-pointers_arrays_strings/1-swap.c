#include "main.h"
/**
 * swap_int - function
 * @a: 1st
 * @b: 2nd
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
	return (0);
}

