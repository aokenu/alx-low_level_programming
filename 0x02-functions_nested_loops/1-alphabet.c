#include "main.h"

/**
 * main - Entry point
 *
 * Description: print all alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

{
	char ch = 97;

	while (ch < 123)
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');

	return (0);
}
