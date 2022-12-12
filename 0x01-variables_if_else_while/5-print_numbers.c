#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Print all single digit numbers of base 10
 *
 * Returb: Always 0 (Success)
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
