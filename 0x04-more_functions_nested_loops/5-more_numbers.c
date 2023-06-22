#include "main.h"
/**
* more_numbers - print numbers from 0 to 14
* 10 times - followed by anem line
*/
void more_numbers(void)
{
int i;
for (i = 0; i < 10; i++)
{
for (int j = 0; j <= 14; j++)
{
_putchar(j + '0');
}
}
_putchar('\n');
}
