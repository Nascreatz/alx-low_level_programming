#include "main.h"

/**
 * main - check the code.
 * Description: 10 x alphabet
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i = 0;
	
	while (i < 10)
	{
		int j = 'a';
		while (j <= 'z')
		{
			_putchar(j);
			j++;
		}
		_putchar('\n');
		i++;
	}
}