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
	ssize_t bytes_written;

	fp = fopen(filename, "r");
	if (filename == NULL || fp == NULL)
	{
		return (0);
	}

	buffer = malloc(letters + 1); /*Allocate space for NULL terminator*/
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	bytes_written = fread(buffer, 1, letters, fp);
	if (bytes_written < 0)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}

	buffer[bytes_written] = '\0'; /*NULL terminate the buffer*/

	if (write(STDOUT_FILENO, buffer, bytes_written) != bytes_written)
	{
		fclose(fp);
		free(buffer);
		return (0);
	}
	fclose(fp);
	free(buffer);
	return (bytes_written);
}
