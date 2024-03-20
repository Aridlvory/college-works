// Arrays

#include <stdio.h>
int main()
{
	int a[4], i;
	for (i = 0;i < 4;i++)
	{
		printf("Enter Element: ");
		scanf("%d", &a[i]);
	}
	for (i = 0;i < 4;i++)
	{
		printf("%d ", a[i]);
	}
}
