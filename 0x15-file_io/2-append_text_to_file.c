#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	int i;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd < 0)
		return (-1);

	for (i = 0; *(text_content + i) != '\0'; i++)
		len++;

	written = write(fd, text_content, len);
	if (written < 0)
		return (-1);

	return (1);
}
