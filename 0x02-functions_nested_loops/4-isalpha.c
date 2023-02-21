#include "main.h"
/**
 * _isalpha - check if c is alpha
 * @c: the ascii number of char checked
 * Return: 1 (Success) , 0 (otherwise)
 */
int _isalpha(int c)
{
	return ((c > 64 && c < 91) || (c > 96 && c < 123));
}
