 #include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase.
 */
void print_alphabet_x10(void)
{
	int c =1;
	int j;

	while (count++ <= 9)
	{
		for (j = 97; j <= 122; j++)
	{
			_putchar(j);
	}
		_putchar('\n');
	}
}

