#include "search_algos.h"
/**
* binary_search_exp - Function binary_search_exp.
* @array: Pointer to the first element of the array
* @lf: left limit.
* @rt: rigth limit.
* @value: Value to search for.
* Return: Position of value in array or -1 if fail.
*/
int binary_search_exp(int *array, int value, size_t lf, size_t rt)
{
	size_t md = 0;
	size_t idx = 0;

	if (array == NULL)
	{
		return (-1);
	}

	while (lf <= rt)
	{
		idx = lf;
		printf("Searching in array: ");

		while (idx <= rt)
		{
			if (idx == rt)
				printf("%d", array[idx]);
			else
				printf("%d, ", array[idx]);

			idx++;
		}
		printf("\n");

		md = (lf + rt) / 2;
		if (array[md] < value)
			lf = md + 1;
		else if (array[md] > value)
		{
			if (md == 0)
				rt = 0;
			else
				rt = md - 1;
		}
		else
			return ((int) md);
	}
	return (-1);
}

/**
* exponential_search - Function exponential_search.
* @array: Pointer to the first element of the array
* @size: Number of element in array.
* @value: Value to search for.
* Return: Position of value in array or -1 if fail.
*/
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, min = 0;

	if (array == NULL)
		return (-1);

	if (size == 0)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%d] = [%d]\n", (int) bound, array[bound]);
		bound *= 2;
	}

	if (bound > size)
		min = size - 1;
	else if (bound < size)
		min = bound;
	else
		min = size - 1;


	printf("Value found between indexes [%d] and [%d]\n",
		(int) bound / 2, (int) min);

	return (binary_search_exp(array, value, bound / 2, min));
}
