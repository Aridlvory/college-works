// characters from A to J excluding E

#include<stdio.h>
int main()
{
	int i;
	for (i=65;i<75;i++)
	{
		if (i == 69)
		{
			continue;
		}
		else
		{
			printf("%c ", i);
		}
	}
}
