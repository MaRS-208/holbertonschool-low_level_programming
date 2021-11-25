#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: pointer
 * @letters: number uo characters
 * Return: the actual number of letters it could read and print or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	size_t s, out;
	int fd;
	char *buffer;

	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY | O_CREAT);
	if (fd == -1)
		return (0);
	buffer = malloc(letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}
	s = read(fd, buffer, letters);
	close(fd);
	out = write(STDOUT_FILENO, buffer, s);
	free(buffer);
	if (out != s)
		return (0);
	return (out);
}
