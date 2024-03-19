// nos. from 10 to 0 excluding odd numbers

#include<stdio.h>
int main()
{
	int i;
	for (i=10;i>0;i--)
	{
		if ((i % 2) == 0)
		{
			printf("%d ", i);
		}
		else
		{
			continue;
		}
	}
}

