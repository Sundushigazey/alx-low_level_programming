#include "main.h"
/**
* print_alphabet - Entry point
* 10 times followed by new line
*/
void print_alphabet_x10(void)
{
char ch = 'a';
int i;
i = 0;
while (i < 10)
{
ch = 'a';
while (ch <= 'z')
{
_putchar(ch);
ch++;
}
_putchar('\n');
i++;
}
}
