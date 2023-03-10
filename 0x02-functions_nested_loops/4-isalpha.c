#include "main.h"

/**
 * isalpha - checks for alphabet character
 *  @c: the character to be checked
 *  return: 1 if c is a letter, 0 otherwise
 */

int isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')  || ( c >= 'A' && c <= 'Z'));
}
