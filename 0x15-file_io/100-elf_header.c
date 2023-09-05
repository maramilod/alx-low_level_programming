#include "main.h"
#include <elf.h>
/**
 * print_osabi_a - f
 * @h: h
 */
void print_osabi_a(Elf64_Ehdr h)
{
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_ARM:
			printf("ARM");
			break;
		case ELFOSABI_MODESTO:
			printf("Nove11 - Modesto");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App");
			break;
		case ELFOSABI_OPENBSD:
			printf("UNIX - OpenBSD");
			break;
		default:
		printf("<unknown: %x>\n", h.e_ident[EI_OSABI]);
		break;
	}
}
/**
 * print_osabi - fun
 * @h: h
 */

void print_osabi(Elf64_Ehdr h)
{
	printf("  OS/ABI:                            ");
	switch (h.e_ident[EI_OSABI])
	{
		case ELFOSABI_NONE:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_HPUX:
			printf("UNIX - HP-UX\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_SOLARIS:
			printf("UNIX - Solaris\n");
			break;
		case ELFOSABI_IRIX:
			printf("UNIX - IRIX\n");
			break;
		case ELFOSABI_FREEBSD:
			printf("UNIX - FreeBSD\n");
			break;
		case ELFOSABI_TRU64:
			printf("UNIX - TRU64\n");
			break;
		case ELFOSABI_ARM:
			printf("ARM\n");
			break;
		case ELFOSABI_STANDALONE:
			printf("Standalone App\n");
			break;
		default:
			print_osabi_a(h);
			break;
	}
}
void print(Elf64_Ehdr h)
{
	int j;

		printf("  Magic:   ");
	for (j = 0; j < EI_NIDENT; j++)
		printf("%2.2x%s", h.e_ident[j], j == EI_NIDENT - 1 ? "\n" : " ");
}
/**
 * print_data - fun
 * @h:a
 */
void print_data(Elf64_Ehdr h)
{
	printf("  Data:                              ");

	switch (h.e_ident[EI_DATA])
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
	}
}
/**
 * print_abi - f
 * @h: h
 */
void print_abi(Elf64_Ehdr h)
{
	printf("  ABI Version:                       %d\n",
	       h.e_ident[EI_ABIVERSION]);
}
/**
 * print_type - f
 * @h: h
 */
void print_type(Elf64_Ehdr h)
{
	char *p = (char *)&h.e_type;
	int i = 0;

	printf("  Type:                              ");

	if (h.e_ident[EI_DATA] == ELFDATA2MSB)
		i = 1;
	switch (p[i])
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown: %x>\n", p[i]);
			break;
	}
}
/**
 * print_entry - f
 * @h: h
 */
void print_entry(Elf64_Ehdr h)
{
	int i = 0, len = 0;
	unsigned char *p = (unsigned char *)&h.e_entry;

	printf("  Entry point address:               0x");

	if (h.e_ident[EI_DATA] != ELFDATA2MSB)
	{
		i = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i--;
		printf("%#x", p[i--]);
		for (; i >= 0; i--)
			printf("%02x", p[i]);
		printf("\n");
	}
	else
	{
		i = 0;
		len = h.e_ident[EI_CLASS] == ELFCLASS64 ? 7 : 3;
		while (!p[i])
			i++;
		printf("%#x", p[i++]);
		for (; i <= len; i++)
			printf("%02x", p[i]);
		printf("\n");
	}
}
/**
 * printclas - class
 * @h: h
 */

void printclas(Elf64_Ehdr h)
{
	printf("  Class:                             ");
	switch (h.e_ident[EI_CLASS])
	{
		case ELFCLASS64:
			printf("ELF64");
			break;
		case ELFCLASS32:
			printf("ELF32");
			break;
		case ELFCLASSNONE:
			printf("none");
			break;
	}
	printf("\n");
}
/**
 * printver - version
 * @h: header struct
 */
void printver(Elf64_Ehdr h)
{
	printf("  Version:                           %d", h.e_ident[EI_VERSION]);
	switch (h.e_ident[EI_VERSION])
	{
		case EV_CURRENT:
			printf(" (current)");
			break;
		case EV_NONE:
			printf("%s", "");
			break;
			break;
	}
	printf("\n");
}

/**
 * main - entry point
 *
 * @argc: int
 * @argv: char*
 * Return: 0
 */

int main(int argc, char **argv)
{
	int f;
	Elf64_Ehdr h;
	ssize_t b;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);
	f = open(argv[1], O_RDONLY);
	if (f == -1)
		dprintf(STDERR_FILENO, "Can't open file: %s\n"
				, argv[1]), exit(98);
	b = read(f, &h, sizeof(h));
	if (b < 1 || b != sizeof(h))
	{
		dprintf(STDERR_FILENO, "Can't read from file: %s\n"
				, argv[1]), exit(98);
	}
	if (h.e_ident[0] == 0x7f && h.e_ident[1] == 'E'
			&& h.e_ident[2] == 'L' && h.e_ident[3] == 'F')
	{
		printf("ELF Header:\n");
	}
	else
		dprintf(STDERR_FILENO, "Not ELF file: %s\n", argv[1]), exit(98);
	print(h);
	printclas(h);
	print_data(h);
	printver(h);
	print_osabi(h);
	print_abi(h);
	print_type(h);
	print_entry(h);
	if (close(f))
		dprintf(STDERR_FILENO, "Error closing file descriptor: %d\n", f), exit(98);
	return (EXIT_SUCCESS);
}
