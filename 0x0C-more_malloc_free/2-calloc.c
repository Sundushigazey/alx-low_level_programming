#include <stdlib.h>
#include "main.h"

/**
 * *_mset - fills memory with a constant byte
 * @s1: memory area to be filled
 * @s2: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_mset(char *s1, char s2, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s1[i] = s2;
	}

	return (s1);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);

	if (p == NULL)
		return (NULL);

	_mset(p, 0, nmemb * size);

	return (p);
}
