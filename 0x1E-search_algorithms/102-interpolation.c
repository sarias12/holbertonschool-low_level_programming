#include "search_algos.h"
/**
* interpolation_search - Function interpolation_search.
* @array: Pointer to the first element of the array
* @size: Number of element in array.
* @value: Value to search for.
* Return: Position of value in array or -1 if fail.
*/
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
		return (-1);

	while ((array[high] != array[low]) &&
		(value >= array[low]) && (value <= array[high]))
	{
		mid = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
		printf("Value checked array[%d] = [%d]\n", (int) mid, (int) array[mid]);
		if (array[mid] < value)
			low = mid + 1;
		else if (value < array[mid])
			high = mid - 1;
		else
			return (mid);
	}

	if (value == array[low])
		return (low);
	mid = low + (((double)(high - low) / (array[high] - array[low])) *
			(value - array[low]));
	printf("Value checked array[%d] is out of range\n", (int) mid);
	return (-1);
}
