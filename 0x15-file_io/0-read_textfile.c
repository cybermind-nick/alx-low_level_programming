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
	ssize_t char_count = 0;
	char *buf;
	int i = 0;

	if (*filename == '\0' || filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters + 1));
	if (buf == NULL)
		return (0);

	read(fd, buf, letters);

	while (buf[i] != '\0')
	{
		_putchar(buf[i]);
		i++;
		char_count++;
	}

	return (char_count);

}
