#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file to append to
 * @text_content: content to append to the file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (; text_content[len]; len++)
			;
	}

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		w = write(fd, text_content, len);

		if (w == -1 || len != w)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
