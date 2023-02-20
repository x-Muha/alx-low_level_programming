#include <stdio.h>
/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	int i;

	putchar('0');
	for (i = 0; i <= 9; i++)
	{
		putchar(',');
		putchar(' ');
		putchar('1' + i);
	}
	return (0);
}
