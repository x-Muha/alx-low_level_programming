#include "main.h"
/**
 * print_rev - func
 * @s: char
 * Return: void
 */
void print_rev(char *s)
{
	int len = 0;
	int i;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
