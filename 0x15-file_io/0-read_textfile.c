#include "main.h"

/**
 * read_textfile - function to read specified textfiles
 * @filename: name of the file
 * @letters: number of letters to read
 *
 * Return: number of read characters (ssize_t)
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_write;
	char *buffer;

	if (*filename == '\0' || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	/* write to STDOUT */
	n_write = write(STDOUT_FILENO, buffer, n_read);
	if (n_write == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	close(fd);
	return (n_read);

}
