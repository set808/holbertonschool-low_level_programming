#include "holberton.h"

/**
 * _strlen - returns the length of the string
 * @s: string
 *
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int x;

	for (x = 0; s[x] != '\0'; x++)
		;
	return (x);
}

/**
 * main - copies the contents of a file to another file
 * @ac: argument count
 * @av: list of arguments
 *
 * Return: returns 0 on success, exit codes on failure
 */
int main(int ac, char *av[])
{
	int to_fd, from_fd, read_count, write_count;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	to_fd = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 00664);
	if (to_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	read_count = 1024;
	while (read_count == 1024)
	{
		read_count = read(from_fd, buf, 1024);
		if (read_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", av[1]);
			exit(98);
		}

		write_count = write(to_fd, buf, read_count);
		if (write_count == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}

	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
	if (close(from_fd)  == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd);
		exit(100);
	}
	return (0);
}
