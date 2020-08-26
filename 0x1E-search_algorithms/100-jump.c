#include "search_algos.h"
/**
* jump_search - Function jump_search.
* @array: Pointer to the first element of the array
* @size: Number of element in array.
* @value: Value to search for.
* Return: Position of value in array or -1 if fail.
*/
int jump_search(int *array, size_t size, int value)
{
	size_t st = 0, end = sqrt(size), i = 0;

	if (array == NULL)
		return (-1);

	while (end < size && array[end] < value)
	{
		printf("Value checked array[%d] = [%d]\n",
			(int) st, array[st]);
		st = end;
		end += sqrt(size);
	}
	printf("Value checked array[%d] = [%d]\n", (int) st, array[st]);
	printf("Value found between indexes [%d] and [%d]\n",
		(int) st, (int) end);

	for (i = st; i <= end && i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", (int) i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
