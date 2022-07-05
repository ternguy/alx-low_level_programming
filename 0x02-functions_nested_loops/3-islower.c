#include "main.h"
/**
 * _islower -> Checks if a character is lowercase.
 * return: returns 1 and 0 depending on the condition
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
