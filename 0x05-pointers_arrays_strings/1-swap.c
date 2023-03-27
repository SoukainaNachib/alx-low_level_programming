#include "main.h"

/**
  * swap_int - Swaps the values of two integers
  *
  * @a: An integer to swap
  * @b: Another integer to swap
  *
  * Return: void
  */
void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}
