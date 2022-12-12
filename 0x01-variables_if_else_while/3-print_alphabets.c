#include <stdio.h>
#include <stdlib.h>

/**
 * main - ENtry point
 *
 * Description: Print alphabets in lower and upper case
 *
 * Return: Always 0 (Success)
 */

int main(void)


{
	int i = 97;
	int j = 65;

	while (i < 123)
	{
		putchar(i);
		i++;
	}

	while (j < 91)
	{
		putchar(j);
		j++;
	}

	return (0);
}
