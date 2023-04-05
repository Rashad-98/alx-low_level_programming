#include "main.h"

/**
 * _puts_recursion - prints a string to screen using recursion
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\n')
		return;
	_putchar(*s);
	_putchar(*(s + 1));
}
