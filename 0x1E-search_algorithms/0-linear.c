#include "search_algos.h"

/**
  * linear_search - func searches a value in array
  * @array: pointer to 1st array search element
  * @size: size_t variable
  * @value: value being looked for
  * Return: 1st index found and -1 if NULL
  */
int linear_search(int *array, size_t size, int value)
{
	int j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < (int) size; j++)
	{
		printf("Value checked array[%d] = [%d]\n", j, array[j]);

		if (array[j] == value)
			return (j);
	}

	return (-1);
}
