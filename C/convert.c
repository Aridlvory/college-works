#include<stdio.h>
int main()
{
	float km, mt, ft, in, cm;
	printf("Enter distance in km.: ");
	scanf("%f",&km);

	mt = km * 1000.0;
	ft = km * 3280.84;
	in = km * 39370.08;
	cm = km * 100000.0;

	printf("\nDistance in ft: %0.2f",ft);
	printf("\nDistance in mt: %0.2f",mt);
	printf("\nDistance in in: %0.2f",in);
	printf("\nDistance in cm: %0.2f",cm);
}
