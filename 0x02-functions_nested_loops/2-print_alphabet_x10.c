#include "main.h"

/**
 * print_alphabet_x10 - prints alphabet x10 in lowercase
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char ch;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			putchar(ch);
		}
		putchar('\n');
	}
}
