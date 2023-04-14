#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <elf.h>

/**
 * print_addr - prints entry point address
 * @ptr: magic
 * Return: no return
 */

void print_addr(char *ptr)
{
	int j;
	int b;
	char s;

	printf("  Entry point address:               0x");

	s = ptr[4] + '0';
	if (s == '1')
	{
		b = 26;
		printf("80");
		for (j = b; j >= 22; j--)
		{
			if (ptr[j] > 0)
				printf("%x", ptr[j]);
			else if (ptr[j] < 0)
				printf("%x", 256 + ptr[j]);
		}

		if (ptr[7] == 6)
			printf("00");
	}


	if (s == '2')
	{
		b = 26;
		for (j = b; j > 23; j --)
		{
			if (ptr[j] >= 0)
				printf("%02x", ptr[j]);
			else if (ptr[j] < 0)
				printf("%02x", 256 + ptr[j]);
		}
	}

	printf("\n");
}



/**
 * print_type - print type
 * @ptr: magic
 * Return: no return
 */
void print_type(char *ptr)
{
	char type = ptr[16];

	if (ptr[5] == 1)
		type = ptr[16];
	else
		type = ptr[17];


	printf("  Type:                                ");
