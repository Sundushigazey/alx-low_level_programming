#include <atdlib>
#include "function_pointers.h"
/*
 * array_iterator- excutes a function
 * @array: array to iterator over
 * @size: size of the array
 * @action : pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int n;
	if (!array || !action)
		return;
	for (n = 0; n < size; n++)
		action(array[n]);
}
