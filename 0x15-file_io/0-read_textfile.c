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
	ssize_t char_count = 0;
	char *buf[letters + 1];

	if (filename == '\0' || filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == NULL)
		return (0);

	read(fd, buf, letters);
	buf[letters] = '\0';

	while (buf != '\0')
	{
		_putchar(buf++);
		char_count++;
	}

	return (char_count);

}
