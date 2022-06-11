#include <stdio.h>
#include "main.h"


/** main - checks for uppercase character.
 * @c: character to be checked
 * Returns: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	char c;
	if (c >= 'A' && c <= 'Z')
	{	
		return (0);
	}
	else (c >= 'a'&& c <= 'z')
	{	
		return (1);
	}

}
