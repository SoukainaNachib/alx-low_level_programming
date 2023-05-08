#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * append_text_to_file - appends a text at the end of a file
 * @filename: name of file
 * @text_content: text
 * Return: 1 - success, -1 error
 */

int append_text_to_file(const char *filename, char *text_content)
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

	file = open(filename, O_WRONLY | O_APPEND);

	if (file == -1)
		return (-1);

	write(file, text_content, x);

	return (1);
}
