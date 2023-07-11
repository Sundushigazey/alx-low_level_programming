#include "main.h"
#include <string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *result;
int l1 = strlen(s1);
int l2 = strlen(s2);
if (s1 == NULL)
{
s1 = "";
}
if (s2 == NULL)
{
s2 = "";
}
result = (char *) malloc((l1 + l2 + 1) * sizeof(char));
if (result == NULL)
{
return (NULL);
}
strcpy(result, s1);
strcat(result, s2);
return (result);
}
