#include<unistd.h>
int main (void){
	char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	int s = 0;
	while (quote[s] != '\0') {
		putchar(quote[s]);
		s++
	}
	returm(1);
}
