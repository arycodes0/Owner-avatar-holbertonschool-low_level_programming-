#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: Name of the file to create.
 * @text_content: Text to w to the file.
 * Return: 1 on success, or -1 if failed.
 */

int create_file(const char *filename, char *text_content)
{
	int filedescriptor, bytes_written;

	if (!filename)
		return (-1);

	filedescriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (filedescriptor == -1)
		return (-1);

	if (!text_content)
	{
		bytes_written = write(filedescriptor, text_content, strlen(text_content));
		if (bytes_written == -1)
		{
			close(filedescriptor);
			return (-1);
		}
	}
	close(filedescriptor);
	return (1);
}
