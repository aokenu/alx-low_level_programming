#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints _putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char str[10] = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}

