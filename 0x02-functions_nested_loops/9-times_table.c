#include "main.h"

/**
 * Multiplication_table - Prints the 9 times table, starting with 0 to 9.
 */

void times_table(void)
{
	int num, multiple, product;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');

		for (multiple = 1; multiple <= 9; multiple++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * multiple;

			if (product <= 9)
				_putchar(' ');
			else
				_putchar((product / 10) + '0');

			_putchar((product % 10) + '0');
		}
		_putchar('\n');
	}
}
