#include "main.h"
/**
 * _pow_recursion - func
 * @x: base
 * @y: power
 * Return: int
 */
int _pow_recursion(int x,int y)
{
	if (y < 0)
		return (-1);
	for (;y > 1; y--)
		x = x * x;
	return (x);
}
