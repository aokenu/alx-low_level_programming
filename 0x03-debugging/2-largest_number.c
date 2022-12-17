#include <stdio.h>
#include "main.h"

/**
 * main - prints the largest of 3 numbers
 *
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 *
 * Return: largest number
 */

int main(void)

{

	int a = 972;
	int b = -98;
	int c = 0;

	int largest;

	int largest_number(int a, int b, int c);
	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > a && b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}
	printf("%d is the largest number\n", largest);

	return (0);
}
