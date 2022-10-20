#include "main.h"

/**
*print_numbers - print numbers from 0 to 9 except 2 and 4
*
*Return: void
*/

void print_numbers(void)
{
	char c;

	c = 0;

	while (c < 10)
	{
		if (c != 2 || c != 4)
			_putchar(c);
		c++;
	}
	_putchar('\n');
}
