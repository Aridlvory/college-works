#include<stdio.h>

int power (int a, int b);
int main()
{
	int a, b, val;
	printf("Enter 2 elements a and b, (a^b): "); scanf("%d %d", &a, &b);
	val = power(a, b);
	printf("%d", val);
	return 0;
}

int power (int a, int b)
{
	int i, pow= 1;
	for (i=0; i<b; i++)
	{
		pow = pow* a;
	}
	return pow;
}
