#include "main.h"
/**
 * read_textfile - Reads the txt file.
 * @filename: File to read
 * @letters: Bytes
 * Return: The bytes it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int *fdescriptor; /*File descriptor*/
	char *buffer;
	ssize_t bytes_written, bytes_read;

	if (filename == NULL)
	{
		return (0);
	}
	*fdescriptor = open(filename, O_RDONLY); /*Opens file using read only FLAG*/
	if (*fdescriptor == -1) /*Checking if file opening was unsuccessful*/
	{
		return (0);
	}
	buffer = malloc(letters + 1); /*Allocate space for NULL terminator*/
	if (buffer == NULL)
	{
		close(*fdescriptor); /*Close the fdescriptor before returning*/
		return (0);
	}
	bytes_read = read(*fdescriptor, buffer, letters);
	if (bytes_read < 0)
	{
		close(*fdescriptor);
		free(buffer);
		return (0);
	}
	buffer[bytes_read] = '\0'; /*NULL terminate the buffer*/
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read); /*Write to stdout*/
	if (bytes_written != bytes_read)
	{
		close(*fdescriptor);
		free(buffer);
		return (0);
	}
	close(*fdescriptor);
	free(buffer);
	return (bytes_read);
}
