// Write a program to print the Armstrong numbers from 100 to up to 999
#include<stdio.h>
int main()
{
	int i, j, arm = 0, n, r;
	for (i=100;i<1000;i++)
	{
		n = i;
		arm = 0;
		for (j=1;j<=3;j++)
		{
			r = n % 10;
			arm += (r*r*r);
			n /= 10;
		}
		if (arm == i) printf("%d is an Armstrong number\n", i);
	}
	return 0;
}


