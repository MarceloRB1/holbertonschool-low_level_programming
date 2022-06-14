#include "main.h"

/**
 * _strlen - returns the lenght of a string
 * @s: string to evaluate
 * Return: length of the string
 */
int _strlen(char *s)
{
	int a;
	
	a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
