#include "main.h"
/**
 * _strlen_recursion - func
 * @s: char
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int len;

	if (*s)
	{
		len++;
		len = len + _strlen_recursion(s + 1);
	}
	return (len);
}
