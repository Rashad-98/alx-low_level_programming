#include <stdio.h>

/**
 * print_first - prints a string before main gets executed
 */
void __attribute__ ((constructor)) print_first(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
