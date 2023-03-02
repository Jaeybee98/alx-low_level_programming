#include "main.h"

/**
 * print_buffer - prints a buffer in a specific format
 *
 * @b: pointer to buffer to be printed
 * @size: size of the buffer
 *
 * Return: void
 */
void print_buffer(char *b, int size)
{
	if (size <= 0)
	{
		printf("\n");
		return;
	}

	int i, j;

	for (i = 0; i < size; i += 10)
	{
		printf("%08x ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x ", b[i + j] & 0xff);
			else
				printf("   ");
		}

		printf(" ");

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				if (b[i + j] >= ' ' && b[i + j] <= '~')
					printf("%c", b[i + j]);
				else
					printf(".");
			}
			else
			{
				printf(" ");
			}
		}

		printf("\n");
	}
}
