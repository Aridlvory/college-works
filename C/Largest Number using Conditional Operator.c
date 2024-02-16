#include<stdio.h>
int main()
{
	int a,b,c,d;
	printf("Input 3 Different Numbers");
	scanf("%d%d%d",&a,&b,&c);
	d = (a>b)?((a>c)?a:c):((b>c)?b:c);
	printf("%d is the larget of three numbers", d);
	return 0;
}
