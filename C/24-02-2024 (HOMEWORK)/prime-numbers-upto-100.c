// Write a program to print all prime numbers up to 100.
#include<stdio.h>
int main()
{
	int i, j, p;
	for (i=2;i<=100;i++)
	{
		p = 1;
		for (j=2;j<i;j++)
		{
			if (i%j == 0) 
			{
				p = 0;
				break;
			}
		}
		if (p == 1) printf("%d is a prime number \n", i);
	}
	return 0;
}


