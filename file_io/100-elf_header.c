#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_error - Prints an error message and exits.
 * @msg: Error message to print.
 */
void print_error(const char *msg)
{
	dprintf(STDERR_FILENO, "Error: %s\n", msg);
	exit(98);
}

/**
 * main - Displays the information contained in the ELF header.
 * @argc: Number of arguments.
 * @argv: Array of arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
	int fd;
	ssize_t bytes;
	Elf64_Ehdr header;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Can't open file");

	bytes = read(fd, &header, sizeof(Elf64_Ehdr));
	if (bytes != sizeof(Elf64_Ehdr))
	{
		close(fd);
		print_error("Can't read ELF header");
	}

	if (header.e_ident[0] != 0x7f ||
	    header.e_ident[1] != 'E' ||
	    header.e_ident[2] != 'L' ||
	    header.e_ident[3] != 'F')
	{
		close(fd);
		print_error("Not an ELF file");
	}

	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x%c", header.e_ident[i], i == EI_NIDENT - 1 ? '\n' : ' ');

	close(fd);
	return (0);
}
