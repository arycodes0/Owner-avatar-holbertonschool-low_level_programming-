#include "main.h"

/**
 * read_textfile - Reads the txt file.
 * @filename: File to read
 * @letters: Bytes
 * Return: The bytes it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	FILE *fp = fopen(filename, "r");
	if (fp == NULL)
		return (0);

	char *buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		fclose(fp);
		return (0);
	}
	ssize_t bytes_read = fread(buffer, sizeof(char), letters, fp);
	if (bytes_read < 0)
	{
		fclose (fp);
		free (buffer);
		return (0);
	}
	ssize_t bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written != bytes_read)
	{
		fclose (fp);
		free (buffer);
		return (0);
	}
	fclose (fp);
	free (buffer);
	return (bytes_written);
}
