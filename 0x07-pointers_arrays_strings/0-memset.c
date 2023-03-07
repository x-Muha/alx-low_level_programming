#include "main.h"
/**
 * _memset - func
 * @s: char to edit on
 * @b: char to put
 * @n: first bits
 * Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; 0 < n; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
