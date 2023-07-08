#include "main.h"

/**
 * print_binary - print binary equivalent of a decimal number
 * @n: number to print in binary number
 */
void print_binary(unsigned long int n)
{
	int i, counter = 0;
	unsigned long int cur;

	for (i = 63; i >= 0; i--)
	{
		cur = n >> i;

		if (cur & 1)
		{
			_putchar('1');
			counter++;
		}
		else if (counter)
			_putchar('0');
	}
	if (!counter)
		_putchar('0');
}
