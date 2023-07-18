#include "main.h"
#include <stdio.h>
/**
 * _islower - see if the character is lowercase
 * @c: the character to check
 * Return: 1 if c is lowercase , 0 otherwise
 */
int _islower(int c)
{
	if (c <= 97 && c <= 122)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
