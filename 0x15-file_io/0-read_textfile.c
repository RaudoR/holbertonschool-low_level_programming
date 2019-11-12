#include "holberton.h"
/**
 * read_textfile - this function will read a text file
 * @filename: the file to be read
 * @letters: to be printed
 * Return: rd
 */
ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd;
	ssize_t rd, wrt;
	char *p_letters = malloc(sizeof(char) * letters);

	if (filename == NULL)
		return (0);
	if (p_letters == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(fd, p_letters, letters);
	if (rd == -1)
		return (0);

	wrt = write(STDOUT_FILENO, p_letters, rd);
	if (wrt == -1)
		return (0);
	close(fd);
	free(p_letters);
	return (rd);
}
