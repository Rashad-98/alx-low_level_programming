#include "main.h"

/**
 * _puts_recursion - prints a string to screen using recursion
 * @s: pointer to string to be printed
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
