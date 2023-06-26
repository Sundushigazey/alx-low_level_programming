#include "main.h"
/**
 * int _strlen - returns the length of a string
 * @s: string to evaluate
 *
 * Returns the lenght of string
 */
int _strlen(char *s)
{
int i;
for (i = 0; s[i] != '\0'; s++)
{
	i++;
}
return (i);
}
