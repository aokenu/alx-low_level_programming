#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: prnt all single digit number of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
