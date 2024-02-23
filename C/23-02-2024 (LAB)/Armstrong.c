// Identify armstrong number

#include<stdio.h>
int main()
{
	int i, sum = 0, n, n1, r = 0;
	printf("Enter the number to check which one is Amstrong: ");
	scanf("%d", &n);
	n1 = n;
	for (i=1;i<=3;i++)
	{
		r = n % 10;
		sum += (r*r*r);
		n /= 10;
	}
	if (sum == n1) printf("%d is an Armstrong no.", n1);
	else		   printf("%d is an Armstrong no.", n1);
	return 0;
}
