#include <stdio.h>
#include <unistd.h>
/**
 * main - print lowercase a-z
 *description: print the alphabet in lowercase\n
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch;
	
	for (ch = 'a' ; ch <= 'z' ; ch++)
	{
		putchar(ch)
	}
	putchar('\n');
	return (0);
}

