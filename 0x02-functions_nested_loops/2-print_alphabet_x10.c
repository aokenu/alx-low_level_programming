#include "main.h"

/**
 * print_alphabet - print alphabet 10x
 *
 * Return: void
 */

void print_alphabet_x10(void)

{
	int i = 97;

	while (i < 123)
	{
		while (i < 123)
		{
			_putchar(i);
			i++;
		}

		_putchar(i);
		i++;
	}
	_putchar('\n');
}
