#include<stdio.h>
int main()
{
	int i, j, n;
	n = 71;
	for (i=1;i<=7;i++)
	{
		for (j=65;j<=n;j++)
		{
			printf("%c", j);
		}
		for (j=n;j>=65;j--)
		{
			printf("%c", j);
		}
		printf("\n");
		n--;
	}
	return 0;
}
