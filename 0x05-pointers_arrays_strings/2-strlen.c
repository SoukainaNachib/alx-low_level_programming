#include "main.h"

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(char *s)
{
	int m = 0;

	for (; *s != '\0'; s++)
	{
		m++;
	}

	return (m);
}

