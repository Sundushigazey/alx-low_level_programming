#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: area of memory to be filled
 * @b: constant byte
 * @n: number of time to be filled
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; n > 0; i++; n--)
	{
	s{i} = b;
	}
return (s);
}
