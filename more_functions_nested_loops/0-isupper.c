#include "main.h"

/**
 * _isupper - check for uppercase character
 * Return: 1 uppercase and 0 otherwise
 * @c: character to be checked
 */

int _isupper(int c)
{
		if (c > 64 && c < 91)
			return (1);
		return (0);
}
