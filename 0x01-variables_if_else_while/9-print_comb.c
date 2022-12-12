#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Print all possible comminations of single-digit numbers
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
		putchar(44);
		i++;
	}

	putchar(10);

	return (0);
}
