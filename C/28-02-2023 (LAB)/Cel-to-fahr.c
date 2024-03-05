// Celsius Fahrenheit operation

#include<stdio.h>
int main()
{
	int c;
	float temp;
	double Fahr, Cel;
	printf("Select operation to continue: \n");
	printf("(1) Celsius to Fahrenheit\n");
	printf("(2) Fahrenheit to Celsius\n");
	scanf("%d", &c);
	switch(c)
	{
		case 1:
			printf("Enter Temperature value: ");
			scanf("%f", &temp);
			Fahr = (1.8 * temp) + 32;
			printf("Celsius to Fahrenheit %lf", Fahr);
			break;
		case 2:
			printf("Enter Temperature value: ");
			scanf("%f", &temp);
			Cel = (temp - 32) / 1.8;
			printf("Fahrenheit to Celsius %lf", Cel);
			break;
		default:
			printf("Wrong Code... Abort!");
	}
}
