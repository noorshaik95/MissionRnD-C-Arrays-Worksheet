/*
OVERVIEW: Given a sorted array, insert a given number into the array at appropriate position.
			E.g.: Arr = [2, 4, 6], num = 5 final Arr = [2, 4, 5, 6]. 5 is inserted at 2nd index.

INPUTS: Integer	Array pointer, length of the array, number to be inserted.

OUTPUT: Array pointer after inserting number.

ERROR CASES: Return NULL for invalid inputs.

NOTES: Use realloc to allocate memory.
*/

#include <stdio.h>
#include <malloc.h>

int * sortedArrayInsertNumber(int *Arr, int len, int num)
{
	int i, j, temp;
	if (Arr == NULL || len < 0)
		return NULL;
	Arr = (int *)realloc(Arr, (len + 1)*sizeof(int));
	for (i = 0; i <= len; i++)
	{
		if (i == len)
		{
			*(Arr + len) = num;
			break;
		}
		if (*(Arr + i) > num)
		{
			for (j = len; j >= i; j--)
			{
				*(Arr + j) = *(Arr + j - 1);
			}
		
			*(Arr + i) = num;
			break;
		}
	}
	return Arr;
}