// Two numbers are entered through the keyboard. Write a program to find the value of one number raised to the power of another
#include<stdio.h>
int main()
{
	int i, a, n, pow = 1;
	printf("Enter base and value with space: ");
	scanf("%d %d", &a, &n);
	for (i=1;i<=n;i++)
	{
		pow *= a;
	}
	printf("%d^%d = %d", a, n, pow);
}


