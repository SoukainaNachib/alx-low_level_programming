#include "main.h"
/**
 * _abs - a function that computes the absolute value of an integer
 * @n: integer input
 * Return: absolute value of n
 */
int _abs(int n)
{
	if (n < 0)
		n = (-1) * n;
	return (n);
}
