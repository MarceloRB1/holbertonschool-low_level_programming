#include <stdio.h>
#include "main.h"


/** main - checks for uppercase character.
 * @c: character to be checked
 * Returns: 1 if uppercase, 0 otherwise
 */

int _isupper(int c)
{
 return (c >= 'A' && c <= 'Z');
}
