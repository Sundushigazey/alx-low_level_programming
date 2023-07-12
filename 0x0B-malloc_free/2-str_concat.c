#include "main.h"
/**
 * *str_concat - concatenates two strings
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to the new string created (Success), or NULL (Error)
 */
char *str_concat(char *s1, char *s2)
{
char *s3;
unsigned int a = 0;
unsigned int b = 0;
unsigned int ln1 = 0;
unsigned int ln2 = 0;
while (s1 && s1[ln1])
ln1++;
while (s2 && s2[ln2])
ln2++;
s3 = malloc(sizeof(char) * (ln1 + ln2 + 1));
if (s3 == NULL)
return (NULL);
a = 0;
b = 0;
if (s1)
{
while (a < ln1)
{
s3[a] = s1[a];
a++;
}
}
if (s2)
{
while (a)
{
s3[a] = s2[b];
a++;
b++;
}
}
s3[a] = '\0';
return (s3);
}
