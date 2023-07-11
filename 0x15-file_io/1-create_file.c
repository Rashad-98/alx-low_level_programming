#include "main.h"

/**
 * create_file - creates a new file and adds string
 * to it
 * @filename: filename
 * @text_content: string to add
 *
 * Return: 1 on success, 0 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i = 0;
	size_t len = 0;
	ssize_t written;

	if (filename == NULL)
		return (-1);

	fd = creat(filename, S_IRUSR | S_IWUSR);
	if (fd < 0)
		return (-1);

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i = 0; *(text_content + i) != '\0'; i++)
		len++;

	written = write(fd, text_content, len);
	if (written < 0)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
