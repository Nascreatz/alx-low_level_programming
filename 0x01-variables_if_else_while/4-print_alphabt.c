#include <stdio.h>

/**
 * main - main functions
 * Description:printing alphabets in lowercase excluding q and e
 * Return: Return
 */
int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
	if (ch != 'q' && ch != 'e')
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
