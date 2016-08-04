#include <stdio.h>

/**
 * needs to be divided into separate functions
 * function magic_check will take 2D array as param
 * function col_add will take one element of array & add its elements
 * function row_add will take 2D array and do what the second group of whiles does
 * function diag_add will take 2D array and add diagonally
 * all funcs will be passed pointer to array sums 
 */
int main(void)
{
	int i, j, add, ar_index;
	int sums[8];
	int square[3][3] = {
		{0, 1, 2},
		{3, 4, 5},
		{6, 7, 8}
	};

	/* this grouping adds the elements of each element of the array (columns) */
	i = 0;
	ar_index = 0;
	while (i < 3)
	{
		add = 0;
		j = 0;
		while (j < 3)
		{
			add += square[i][j];
			j++;
		}
		sums[ar_index] = add;
		printf("%d\n", sums[ar_index]);
		ar_index++;
		i++;
	}

	/* this grouping adds one element of each element of the array (rows) */
	ar_index = 3;
	j = 0;
	while (j < 3)
	{
		i = 0;
		add = 0;
		while (i < 3)
		{
			add += square[i][j];
			i++;
		}
		sums[ar_index] = add;
		printf("%d\n", sums[ar_index]);
		ar_index++;
		j++;
	}

	/* this grouping adds diagonals */
	i = 0;
	j = 0;
	ar_index = 6;
	add = 0;
	while (i < 3)
	{
		add += square[i][j];
		i++;
		j++;
	}
	sums[ar_index] = add;
	printf("%d\n", sums[ar_index]);
	ar_index++;
	
	i = 0;
	ar_index = 7;
	add = 0;
	while (i < 3)
	{
		add += square[i][j];
		i++;
		j--;
	}
	sums[ar_index] = add;
	/* printf("%d\n", sums[ar_index]); */

	/* this grouping checks if the square is magic and returns 1 if it is not */
	i = 0;
	while (i <= ar_index)
	{
		if (sums[i] != sums[i+1])
		{
			return (1);
		}
	}

	return (0);
}
