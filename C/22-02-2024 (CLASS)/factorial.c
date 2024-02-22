// Finding factorial of a number
#include<stdio.h>
int main()
{
	int i, fact=1, n;
	printf("Enter the number of whose factorial u need: ");
	scanf("%d", &n);
	for (i=1;i<=n;i++)
	{
		fact = fact * i;
	}
	printf("Factorial of %d = %d", n, fact);
	return 0;
}
