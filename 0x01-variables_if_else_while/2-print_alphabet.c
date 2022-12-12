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
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	return (0);
}
