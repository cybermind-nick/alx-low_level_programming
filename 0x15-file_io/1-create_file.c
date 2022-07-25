#include "main.h"

/**
 * _strlen - find length of string
 * @str: string
 * Return: length
 */
int _strlen(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;

	return (len);
}

/**
 * create_file - create a file and write to it
 * @filename: name of file to create
 * @text_content: content to write to file
 *
 * Return: 1 (Success) or -1 (Failure)
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	int n_write;

	if (!filename)
		return (-1);

	/* create with permissions if file doesn't exist, else truncate */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* if nothing to write, just return newly created file */
	if (!text_content)
	{
		close(fd);
		return (1);
	}

	/* write to the file, while strlen is needed to know the length */
	n_write = write(fd, text_content, _strlen(text_content));
	if (n_write == -1 || n_write != _strlen(text_content))
	{
		close(fd);
		return (-1);
	}

	close(fd);/* close file stream*/
	return (1);
}
