#include "main.h"
/**
 * create_file - function
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t byte = 0, len = 0;
	int f;

	if (!filename)
		return (0);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	while (*text_content++)
		len++;

	if (len)
		byte = write(f, text_content, len);
	close(f);

	return (byte == len ? 1 : -1);
}
