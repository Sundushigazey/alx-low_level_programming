#include <stdio.h>

/**
* main - prints the alphabet in lowercase, and then in uppercase,
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
char ch = 'a', chr = 'A';
while (ch <= 'z')
{
putchar(ch);
ch ++;
}
while (chr <= 'Z')
{
putchar(chr);
chr ++;
}        
return (0);
}
