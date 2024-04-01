#include "main.h"

/**
 * append_text_to_file - Appends txt at the end of the file.
 * @filename: Name of the file
 * @text_content: Text to write to file
 * Return: 1 on succ, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written;
	size_t text_len = 0;

	if (!filename)
		return (-1);

	if (!text_content)
		return (1);

	/* Below we open the file in append mode using the correct flags */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	/* Below we calculate the length of the text_content */
	while (text_content[text_len] != '\0')
		text_len++;

	/* Here we write the text_content to the file */
	bytes_written = write(fd, text_content, text_len);
	if (bytes_written == -1)
	{
		close(fd);
		return (-1);
	}

	/* Finally we close the file descriptor */
	if (close(fd) == -1)
		return (-1);

	return (1);
}
