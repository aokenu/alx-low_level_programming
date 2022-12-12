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
	int i = 0;

	while (i < 48)
	{
		if (i < 48)
			putchar(i + '0');
		else if (i > 41)
			putchar(i - 10 + 'A');
		i++;
	}
	putchar(10);

	return (0);
}
