#include "main.h"

/**
 * **alloc_grid - creates a two dimensional array of ints
 * @width: width of the matrix
 * @height: height of the matrix
 *
 * Return: pointer to the created matrix (Success)
 * or NULL (Error)
 */
int **alloc_grid(int width, int height)
{
int a;
int b;
int c;
int **ar;
if (width <= 0 || height <= 0)
{
return (NULL);
}
ar = (int **) malloc(sizeof(int *) * height);
if (ar == NULL)
{
return (NULL);
}
for (a = 0; a < height; a++)
{
ar[a] = (int *) malloc(sizeof(int) * width);
if (ar[a] == NULL)
{
for (b = 0; b < a; b++)
{
free(ar[b]);
}
free(ar);
return (NULL);
}
for (c = 0; c < width; c++)
{
ar[a][c] = 0;
}
}
return (ar);
}
