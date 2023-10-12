#include "main.h"
/**
 * read_textfile - function
 * @filename: file name
 * @letters:  number of letters it should read and print
 * Return:  the actual number of letters it could read and print
 * or 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t byte;
	char buffer[1024 * 8];
	int f;

	if (!filename || !letters)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	byte = read(f, &buffer[0], letters);
	byte = write(STDOUT_FILENO, &buffer[0], byte);
	close(f);

	return (byte);
}
