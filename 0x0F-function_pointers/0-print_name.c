#include "function_pointers.h"

/**
 * print_name - prints string based on a callback spec
 * @name: name to be printed
 * @f: callback function
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
