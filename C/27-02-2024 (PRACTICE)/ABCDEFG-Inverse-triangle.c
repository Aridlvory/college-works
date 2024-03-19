#include<stdio.h>
int main()
{
	int i, j, n, k, s = 0;
	n = 71;
	for (i=1;i<=7;i++)
	{
		for (j=65;j<=n;j++)
		{
			printf("%c", j);
		}
		for (k=0;k<s;k++)
		{
			printf(" ");
		}
		s = s + 2;
		for (j=n;j>=65;j--)
		{
			printf("%c", j);
		}
		printf("\n");
		n--;
	}
	return 0;
}
