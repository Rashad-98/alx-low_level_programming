#include "main.h"

/**
 * get_endianness - checks cpu architecture for endianness (big or little)
 *
 * Return: 0 if big endian, 1 if little endian
 */
int get_endianness(void)
{
	int n = 1;
	char *p;

	p = (char *)&n;

	if ((int)*p == 0)
		return (0);
	else
		return (1);
}
