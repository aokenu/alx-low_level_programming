#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: Prints alphabets in lower case with putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)

{
	int i = 97;

	while (i < 123)
	{
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}
