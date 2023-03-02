#include "main.h"

/**
 * print_buffer - print the content of size bytes of the buffer pointed by b
 * @n: number to be printed
 */

void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i;
	int j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x ", b[i + j] & 0xff);
			}
			else
			{
				printf("   ");
			}
		}
		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= ' ' && b[i + j] <= '~')
				{
					printf("%c", b[i + j]);
				}
				else
				{
					printf(".");
				}
			}
			else
				printf(" ");
		}
	}
	printf("\n");
}
