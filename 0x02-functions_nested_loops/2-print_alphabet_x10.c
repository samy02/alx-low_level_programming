#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - printing the alphabet 10 times seperated by a new line
 */
void print_alphabet_x10(void)
{
	int i;
	char j;
	for(i=0; i<=10; i++)
	{
		for(j=97; j<=122; j++)
		{
			printf("%c",j);
		}
		_putchar('\n');
	}
}
