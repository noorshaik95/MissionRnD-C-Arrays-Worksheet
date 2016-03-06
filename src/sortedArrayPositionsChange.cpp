/*
OVERVIEW: In a given ascending sorted array, two numbers are changed their position, please fix those two numbers.
E.g.: In [10, 40, 30, 20, 50] 20 and 40 are swapped, so final output will be [10, 20, 30, 40, 50]

INPUTS: Ascending sorted array with two positions swapped, length of the array.

OUTPUT: Update sorted array by fixing swapped numbers.

ERROR CASES: Return NULL for invalid Inputs.

NOTES:
*/

#include <stdio.h>

void * sortedArrayPositionsChange(int *Arr, int len)
{
	int i, j, first = -1, second = -1;
	if (Arr == NULL || len <= 0)
		return NULL;
	for (i = 0, j = len - 1; i < len; i++, j--)
	{
		if (Arr[i] > Arr[i + 1])
		{
			first = i;
		}
		if (Arr[j] < Arr[j - 1])
		{
			second = j;
			break;
		}

	}
	if (first != -1 && second != -1)
	{
		Arr[first] = Arr[first] + Arr[second];
		Arr[second] = Arr[first] - Arr[second];
		Arr[first] = Arr[first] - Arr[second];
	}
}