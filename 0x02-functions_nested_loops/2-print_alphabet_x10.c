#include "main.h"

/**
*print_alphabet_x10 -  print alphabet 10 times
*
*Return _ 0 always(Success)
*/

void print_alphabet_x10(void)

{
	int i = 0;
	
	while (i < 10)
	{
		char j = 97;

		while (j < 123)
		{
			_putchar(j);
			j++;
		}

	_putchar('\n');
	i++;
	}
}
