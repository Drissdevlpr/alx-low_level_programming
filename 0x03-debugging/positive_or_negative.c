#include "main.h"

/**
 * main - tests function that prints if integer is positive or negative
 *
 * Description: testing the solution not positive_or_negative
 * @i: integer
 *
 * Return: Always 0
 */

void positive_or_negative(int i)

{
	if (i > 0)
		printf("%d is posetive\n", i);

	else if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is zero\n", i);
}
