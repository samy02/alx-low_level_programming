#include "main.h"
#include <stdio.h>
/*
 * _isalpha - checks whither c is a alphabet or not
 * @c: the character to check
 * Return: 1 if alpha 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (0);
	}
	if (c >= 'A' && c <= 'Z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
