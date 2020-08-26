#include "search_algos.h"
/**
* linear_search - Function linear search.
* @array: Pointer to the first element of the array
* @size: Number of element in array.
* @value: Value to search for.
* Return: Possition of value in array or -1 if fail.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}
	return (-1);
}
