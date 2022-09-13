#include <stdio.h>


/**
 * main - main function
 * Description:printing alphabets in both lower and upper case
 * Return: Return
 */
int main(void)
{
	int ch, CH;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (CH = 'A'; CH <= 'Z'; CH++)
		putchar(CH);
	putchar('\n');
	return (0);
}
