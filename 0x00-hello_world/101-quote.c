#include<unistd.h>
/**
 * main - Entry point
 *
 * Return: return 1
 */
int main(void)
{
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = 0;
	while (quote[s] != '\0')
	{
		putchar(quote[s]);
		s++;
	};
	return(1);
}
