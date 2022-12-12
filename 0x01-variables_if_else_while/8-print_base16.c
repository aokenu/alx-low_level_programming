#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prints all numbers of base 16 in lower case
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 30;
	int j = 61;

	while (i <= 39)
	{
		putchar(i);
		i++;
	}

	while (j < 67)
	{
		putchar(j);
		j++;
	}

	putchar(10);

	return (0);
}
