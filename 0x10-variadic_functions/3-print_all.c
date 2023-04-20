#include "variadic_functions.h"

/**
 * print_sep - prints comma and space separator
 * @length: length of elements to separate
 * @iterator: iterator
 */
void print_sep(int length, int iterator)
{
	if (iterator != (length - 1))
		printf(", ");
}

/**
 * _strlen -finds length of a string
 * @str: pointer to string
 *
 * Return: length
 */
int _strlen(const char *str)
{
	int i, length;

	i = 0;
	length = 0;
	while (*(str + i) != '\0')
	{
		length++;
		i++;
	}

	return (length);
}

/**
 * print_all - similar to printf
 * @format: pointer to format string
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i, length;
	char *str;

	va_start(ap, format);

	length = _strlen(format);

	i = 0;
	while (i < length)
	{
		switch (*(format + i))
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				print_sep(length, i);
				break;
			case 'i':
				printf("%d", va_arg(ap, int));
				print_sep(length, i);
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				print_sep(length, i);
				break;
			case 's':
				str = va_arg(ap, char *);
				if (!str)
					printf("(nil");
				else
					printf("%s", str);
				print_sep(length, i);
				break;
		}
		i++;
	}
	printf("\n");
}
