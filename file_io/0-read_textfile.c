#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Pointer to the name of the file
 * @letters: Number of letters it should read and print
 *
 * Return: The actual number of letters it could read and print,
 * or 0 if an error occurs.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytes_read, bytes_written;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(letters);
	if (!buffer)
		return (0);

	bytes_read = read(fd, buffer, letters);
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(fd);

	return ((bytes_read == bytes_written) ? bytes_written : 0);
}
