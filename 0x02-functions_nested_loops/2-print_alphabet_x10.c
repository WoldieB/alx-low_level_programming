#include "main.h"

/**
 * print_alphabet_x10 in lower case
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char ch = 'a';	
	while (i < 10)
	{
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		i++;
	}

}
