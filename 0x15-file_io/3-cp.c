#include "main.h"
/**
 * main - entry point
 *
 * @argc: number
 * @argv: string
 * Return: 0
 */
int main(int argc, char **argv)
{
	char buffer[1024];
	ssize_t b;
	int file_from = 0, file_to = 0;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR |
			S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	if (file_to == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	while ((b = read(file_from, buffer, 1024)) > 0)
		if (write(file_to, buffer, b) != b)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	if (b == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n"
				, argv[1]), exit(98);
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
		dprintf(STDERR_FILENO, "Error: Can't close fd %s\n", argv[1]), exit(100);
	return (EXIT_SUCCESS);
}
