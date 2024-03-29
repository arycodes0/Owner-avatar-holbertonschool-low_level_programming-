#include "main.h"

/**
 * read_textfile - Reads the txt file.
 * @filename: File to read
 * @letters: Bytes
 * Return: The bytes it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fp;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
	{
		return (0);
	}

	fp = fopen(filename, "r");
	if (fp == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1); /*Allocate space for NULL terminator*/
	if (buffer == NULL)
	{
	fclose(fp);
		return (0);
	}
	bytes_read = fread(buffer, 1, letters, fp);
	if (bytes_read < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0'; /*NULL terminate the buffer*/

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	fclose(fp);
	free(buffer);

	if (bytes_written == bytes_read)
	{
		return (bytes_written);
	}
	else
	{
		return (0);
	}
}
