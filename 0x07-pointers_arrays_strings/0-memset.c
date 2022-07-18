#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @n: unsigned init
 * @s: pointer
 * @b: byte
 * Return: (s)
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
