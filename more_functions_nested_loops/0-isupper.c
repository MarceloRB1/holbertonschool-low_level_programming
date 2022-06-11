#include "int _isupper(int c)"

/** main - checks for uppercase character.
 * @c: character to be checked
 * Returns: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{	
		return (0);
	}
	else (c >= 'a'&& c <= 'z')
	{	
		return (1);
	}

}
