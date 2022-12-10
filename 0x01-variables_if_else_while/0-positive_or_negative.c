#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/**
 * main - ENtry point
 *
 * Description: This program takes a random number and return if it is positive or not
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n == 0)
	{
		printf("%d, is zero\n", n);
	}
	else if (n > 0)
	{
		printf("%d, is positive\n", n);
	}
	else
	{
		printf("%d, is negative\n", n);
	}

	return (0);
