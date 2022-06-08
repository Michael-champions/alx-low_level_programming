#include "main.h"

/**
 * jack_bauer - code prints every minute of the day
 *
 * Return:
 */
void jack_bauer(void)
{
	int h;
	int m;
	int h_r;
	int m_r;

	while (h <= 23)
	{
		while (m <= 59)
		{
			m_r = m % 10;

			h_r = h % 10;

			_putchar(h / 10 + '0');

			_putchar(h_r = '0');

			_putchar(':');

			_putchar(m / 10 + '0');

			_putchar(m_r + '0');

				m++;

			_putchar(10);
		}

		h++;

		m = 0;
	}
}
