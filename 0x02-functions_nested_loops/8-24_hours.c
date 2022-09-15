#include "main.h"

/**
 * jack_bauer - Day timing
 * Return: always 0
 */
void jack_bauer(void)
{
	int h, s;

	for (h = 0; h <= 23; h++)
	{
		_putchar((h / 10) + '0');
		_putchar((h % 10) + '0');
		_putchar(':');
		_putchar((s / 10) + '0');
		_putchar((s % 10) + '0');
		_putchar('\n');
		return (0);
	}
}
