#include "main.h"

/**
*print_alphabet_x10: print alphabet 10 times
*
*Return: void
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

		_putchar('\n');
		i++;
	}
}
