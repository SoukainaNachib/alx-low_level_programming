#include "main.h"
/**
 * times_table -  a function that prints the 9 times table, starting with 0
 * n = row,multi = column,s = digits of current result
 * Return: times table
 * add extra space past single digit
 */

void times_table(void)
{
	int n, s, multi;

	for (n = 0; n <= 9; n++)
	{
		_putchar('0');
		for (multi = 1; multi <= 9; multi++)
		{
			_putchar(',');
			_putchar(' ');
			s = n * multi;
			/*
			 * put space if product is a simple num
			 * place the first digit if is two num
			 */
			if (s <= 9)
				_putchar(' ');
			else
				_putchar((s / 10) + '0');
			_putchar((s % 10) + '0');
		}
		_putchar('\n');
	}
}
