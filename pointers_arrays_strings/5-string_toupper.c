#include "main.h"
/**
 *
 *
 *
 *
 */

char *string_toupper(char *)
{
	int i, n;
	
	i = 0; 

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			s[1] = s[i] - 32;
	}

	return (s);
}
