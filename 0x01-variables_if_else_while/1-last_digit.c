#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
 * main - Entry point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int z;

	z = n % 10;
	if (z > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (z == 0)
		printf("Last digit of %d is and is 0\n", n);
	else
		printf("Last digit of %d is and is less than 6 and not 0\n", n);
	return (0);
}
