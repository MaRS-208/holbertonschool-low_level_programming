#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer
 * @text_content: pounter
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, a, b = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[b])
			b++;
		a = write(fd, text_content, b);
		if (a == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
