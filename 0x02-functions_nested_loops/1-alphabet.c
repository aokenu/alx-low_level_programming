#include "main.h"

/**
 * print_alphabet - print alphabet
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 97;

	while (ch < 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
