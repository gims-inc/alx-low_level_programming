#include "function_pointers.h"

/**
 * array_iterator - function tha executes function given as aa parameter
 * @array: array pointer
 * @size: size_t size of array
 * @action: callback, function pointer
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t count;

	for (count = 0; count < size; count++)
		action(array[count]);
}
