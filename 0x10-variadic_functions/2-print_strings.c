#include "variadic_functions.h"

/**
 * print_strings - prints strings separated by a separator
 * @separator: pointer to separator string
 * @n: count of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%s", va_arg(ap, char *));
		if (!separator)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
