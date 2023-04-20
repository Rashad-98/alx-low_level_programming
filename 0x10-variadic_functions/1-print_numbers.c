#include "variadic_functions.h"

/**
 * print_numbers - prints numbers separated by a separator
 * @separator: pointer to separator string
 * @n: count of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (!separator)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}
