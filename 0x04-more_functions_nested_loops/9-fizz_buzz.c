#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Description: prints the numbers 1 - 100 
 * Substitute Fizz for multiples of 3, Buzz for multiples of 5,
 * and FizzBuzz for multiples of both 3 and 5 ie. 15
 *
 * Return: always 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if (n % 15 == 0)
			printf("FizzBuzz");
		else if (n % 3 == 0)
			printf("Fizz");
		else if (n % 5 == 0)
			printf("Buzz");
		else
			printf("%i", n);
		if (n < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
