#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Print all alphabets on reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 122;

	while (i > 96)
	{
		putchar(i);
		i--;
	}
	putchar(0);

	return (0);
}

