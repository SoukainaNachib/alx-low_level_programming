#include "main.h"
/**
 * print_alphabet_x10 - a function that prints 10 times the alphabet
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int alpha, ab;

	for (ab = 0; ab <= 9; ab++)
	{
	for (alpha = 'a'; alpha <= 'z' ; alpha++)
		_putchar(alpha);
	_putchar('\n');
	}
}
