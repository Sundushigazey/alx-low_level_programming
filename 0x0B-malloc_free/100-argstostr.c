#include "main.h"
/**
  *argstostr - concatenates all arguments of the program.
  *@ac: argument count.
  *@av: pointer to array of size ac.
  *Return: NULL if ac == 0 or av == null, Pointer to new string.
  *NULL on fail.
  */
char *argstostr(int ac, char **av)
{
int a, b, c, sz;
char *argu;
sz = 0;
c = 0;
if (ac == 0 || av == NULL)
return (NULL);
a = 0;
while (a < ac)
{
b = 0;
while (av[a][b])
{
sz++;
b++;
}
sz++;
a++;
}
argu = (char *) malloc((sizeof(char) * sz) +1);
if (argu == NULL)
return (NULL);
a = 0;
while (a < ac)
{
b = 0;
while (av[a][b])
{
argu[c] = av[a][b];
b++;
c++;
}
argu[c] = '\n';
c++;
a++;
}
argu[c] = '\0';
return (argu);
}
