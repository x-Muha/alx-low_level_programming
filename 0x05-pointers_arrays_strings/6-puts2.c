#include "main.h"
/**
 * puts2 - function 
 * @str: string
 * Return: void
 */
void puts2(char *str)
{
	int len = 0;
	int t = 0;
	char *y = str;
	int o;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	t = len - 1;
	for (o = 0 ; o <= t ; o = o * 2)
	{
		_putchar(str[o]);
	}
	_putchar('\n');
}
