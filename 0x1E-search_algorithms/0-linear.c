#include "search_algos.h"
/**
 * linear_search -Searches fo a value in an array 
 *  using Linear Search algorithm.
 * @array: pointer to the array
 * @size: -number of elements in the array
 * @value: -the value to search for
 * Return: first index where val is located
 */

int linear_search(int *array, size_t size, int value)
{
    unsigned int counter;
    unsigned int findex;

    for (counter = 0; counter < size; counter++)
    {
        printf("Value checked array[%d] = [%d] \n", counter, array[counter]);
        if (value == array[counter])
        {
            findex = counter;
            if (findex)
                return (findex);
        }
    }
    return (-1);
}
