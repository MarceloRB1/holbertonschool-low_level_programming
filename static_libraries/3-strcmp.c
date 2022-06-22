#include "main.h"
/**
 * _strcmp - compares 2 strings
 * @s1: first sstring t compare
 * @s2: second string to compare
 * Return: lees than 0 if s1 is less than s2
 * otherwise more than 0
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
