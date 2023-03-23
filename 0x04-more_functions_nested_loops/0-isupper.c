#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: character to be checked
 *
 * Return: 1 if upercase, 0 if etherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
