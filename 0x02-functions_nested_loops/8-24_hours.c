#include "main.h"

/**
 * jack_bauer - prints every minute in jack bauer's life
 *
 * Return: void
 */
void jack_bauer(void)
{
	int h_tens = 0;

	while (h_tens <= 2)
	{
		int h_units = 0;

		while (h_units <= 9 && !(h_tens == 2 && h_units == 4))
		{
			int m_tens = 0;

			while (m_tens <= 5)
			{
				int m_units = 0;

				while (m_units <= 9)
				{
					_putchar('0' + h_tens);
					_putchar('0' + h_units);
					_putchar(':');
					_putchar('0' + m_tens);
					_putchar('0' + m_units);
					_putchar('\n');
					m_units++;
				}
				m_tens++;
			}
			h_units++;
		}
		h_tens++;
	}
}
