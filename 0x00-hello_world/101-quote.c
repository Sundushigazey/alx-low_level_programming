#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: return 1
 */
int main(void)
{
	char quo[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = 0;

	while (quo[s] != '\0')
	{
		putchar(quo[s]);
		s++;
	};
	return (1);
}
