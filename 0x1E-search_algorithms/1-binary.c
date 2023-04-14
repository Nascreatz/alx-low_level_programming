#include "search_algos.h"

/**
  * printer - func displays array under investigation
  * @array: intial int array
  * @l: starting index
  * @r: last index
  * Return: Void
  */
void printer(int *array, int l, int r)
{
	int j;

	printf("Searching in array: ");

	for (j = l; j <= r; j++)
	{
		if (j == r)
		{
			printf("%d\n", array[j]);
			return;
		}

		printf("%d, ", array[j]);
	}
}

/**
  * binary_search - func searches a sorted array
  * @array: pointer to 1st element of an array
  * @size: size_t number of elements of array
  * @value: value to be found
  * Return: index where value is located and -1 if array is NULL
  */

int binary_search(int *array, size_t size, int value)
{
	int j, x, r;

	if (array == NULL)
		return (-1);

	j = 0;
	r = (int) size - 1;

	while (j <= r)
	{
		x = (j + r) / 2;

		printer(array, j, r);

		if (array[x] < value)
			j = x + 1;

		else if (array[x] > value)
			r = x - 1;

		else if (array[x] == value)
			return (x);
	}

	return (-1);
}
