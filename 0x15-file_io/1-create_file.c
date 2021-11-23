#include "main.h"
/**
 * create_file - creates a file
 * @filename: pointer
 * @text_content: pointer
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, cf = 0, ctc = 0;

	if (!filename)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (text_content)
	{
		cf = strlen(text_content);
		ctc = write(fd, text_content, cf);
	}
	close(fd);
	if (cf != ctc)
		return (-1);
	return (1);
}
