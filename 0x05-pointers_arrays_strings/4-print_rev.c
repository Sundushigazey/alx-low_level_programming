#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s : pointer to array to be reversed
 */
void print_rev(char *s)
{
int i;
int j;
int l;
while (s[i] != '\0')
{
i++;
}
l = i;
for (j = l - 1; j >= 0; j--)
{
_putchar(s[j]);
}
_putchar('\n');
}
