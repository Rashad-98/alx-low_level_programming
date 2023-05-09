#include "main.h"

/**
 * read_textfile - reads a text file and prints it to
 * the POSIX standard output
 * @filename: filename
 * @letters: count of letters to print
 *
 * Return: actual count of printed letters, or 0 on
 * on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL || letters == 0)
	{
		return (0);
	}
	else
	{
		char *buffer;
		int fd;
		ssize_t written, read_count;

		buffer = malloc(sizeof(char) * letters);
		if (buffer == NULL)
			return (0);


		fd = open(filename, O_RDONLY);
		if (fd < 0)
		{
			free(buffer);
			return (0);
		}
		read_count = read(fd, buffer, letters);
		if (read_count < 0)
		{
			free(buffer);
			close(fd);
			return (0);
		}
		written = write(1, buffer, read_count);
		if (written < 0 || !(written == read_count))
		{
			free(buffer);
			close(fd);
			return (0);
		}
		free(buffer);
		close(fd);
		return (read_count);
	}
}
