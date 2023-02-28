#include "main.h"
/**
 * puts_half - fun
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int len;
	int i;

	len = _strlen(str);
	for (i = len / 2; i < len / 2; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
