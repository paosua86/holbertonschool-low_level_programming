#include "main.h"
 /**
	* _islower - check lowercase character
	* @c: integer 1 or 0
	* Description: print alphabet 10 times
	* Return: zero
*/

int _islower(int c)

{

	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
