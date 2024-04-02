// Matrix Transpose

#include <stdio.h>
int main()
{
	int r, c, i, j;
	printf("Enter the no of rows and columns: ");
	scanf("%d %d", &r, &c);
	int A[r][c], T[c][r];
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("Reading A[%d][%d]: ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			T[j][i] = A[i][j];
		}
	}
	
	for (i=0; i<r; i++)
	{
		for (j=0; j<c; j++)
		{
			printf("T[%d][%d] = %d\n", i, j, T[i][j]);
		}
	}
}

