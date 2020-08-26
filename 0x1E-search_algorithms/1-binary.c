#include "search_algos.h"
/**
* binary_search - binary_search.
* @array: Pointer to the first element of the array
* @size: Number of element in array.
* @value: Value to search for.
* Return: Position of value in array or -1 if fail.
*/
int binary_search(int *array, size_t size, int value)
{
	int lf = 0;
	int rt = (int)size - 1;
	int md = 0;
	int idx = 0;

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
			{
				printf("%d", array[idx]);
			}
			else
			{
				printf("%d, ", array[idx]);
			}
			idx++;
		}
		printf("\n");

		md = (lf + rt) / 2;
		if (array[md] < value)
			lf = md + 1;
		else if (array[md] > value)
			rt = md - 1;
		else
		{
			return (md);
		}
	}
	return (-1);
}
