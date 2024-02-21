/*
Multiples of 9 Backwards -- While loop
*/

#include<stdio.h>
int main()
{
	int i=11;
	while(i>0)
	{
		printf("%d x 9 = %d \n", i, i*9);
		i--;
	}
}
