#include "main.h"
/**
 * leet -  replaced
 * @s: String for capitalization modification
 * Return: c
 */


char *leet(char *s)
{
	char l[] = "aAeEoOtTlL";
	char n[] = "4433007711";
	int i = 0;
	int c;

	while (s[i] != 0)
	{
		c = 0;
		while (l[c] != 0)
		{
			if (s[i] == l[c])
			{
				s[i] = n[c];
			}
			c++;
		}
		i++;
	}
	return (s);
}
