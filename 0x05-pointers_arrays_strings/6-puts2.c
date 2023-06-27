#include "main.h"
/**
 * puts2 - prints every other character of a string
 * followed by a new line
 * @str : pointer to string to be printed
 */
void puts2(char *str)
{
int i;
for (i = 0; str[i] != '\n'; i++)
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
}
_putchar('\n');
}
