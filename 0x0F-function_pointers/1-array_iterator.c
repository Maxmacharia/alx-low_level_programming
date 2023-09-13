#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array element on a newline
 * @array: array
 * @size: number of elements to print
 * @action: pointer to print in regular or hex
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	a = 0;
	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
