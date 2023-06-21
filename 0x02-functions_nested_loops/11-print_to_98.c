#include "main.h"
/**
* print_to_98 - prints all natural numbers from n to 98,
* followed by a new line
* @n: print from this number
*/
void print_to_98(int n)
{
int count;
if (n > 98)
for (count = n; count > 98; count--)
print("%d, ", count);
else (n < 98)
for (count = n; count < 98; count++)
print("%d, ", count);
}
