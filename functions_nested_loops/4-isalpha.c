#include "main.h"
/**
 * _isalpha - check a letter
 * @c: letter u other
 * Return: 1 if is letter 0 others
 */

int _isalpha(int c)

{

	if ((c > 65 && c < 90) || (c > 97 && c < 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
