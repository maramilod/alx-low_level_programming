#include "main.h"
/**
 * lele - function
 * @c: string
 * Return: string
 */
int lele(char *c)
{
	int j = 0;

	if (!c)
		return (0);
	while (*c++)
		j++;
	return (j);
}
/**
 * append_text_to_file - function
 * @filename: is the name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return:1 on success, -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t byte = 0, len = lele(text_content);
	int f;

	if (!filename)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (f);
	if (len)
		byte = write(f, text_content, len);
	close(f);

	return (byte == len ? 1 : -1);
}
