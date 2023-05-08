#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * create_file - creates a file
 * @filename: name of file
 * @text_content:text
 * Return: 1 -success, -1 error
 */

int create_file(const char *filename, char *text_content)
{
	int x = 0, file;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";


	while (text_content[x] != '\0')
	{
		x++;
	}

	file = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file == -1)
		return (-1);
	write(file, text_content, x);

	return (1);
}
