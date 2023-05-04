#include "main.h"

/**
 * _strlen - returns length of string (modified)
 * @s: string (const)
 * Return: length of string
 */

int _strlen(const char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * power - exponents
 * @base: base
 * @exp: exponent
 * Return: result (int)
 */

int power(int base, int exp)
{
	int x, number;

	number = 1;
	for (x = 0; x < exp; ++x)
		number *= base;

	return (number);
}

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum;
	int length, x;

	sum = 0;
	if (b == NULL)
		return (sum);
	length = _strlen(b);
	for (x = length - 1; x >= 0; x--)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
		sum += (b[x] - '0') * power(2, length - x - 1);
	}
	return (sum);
}
