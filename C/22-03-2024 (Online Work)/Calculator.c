// Calculator program

#include<stdio.h>
int main()
{
	float num1, num2;
	int opt;
	printf("Enter the option to be executed\n(1) Add\n(2) Substract\n(3) Multiply\n(4) Divide\n:");
	scanf("%d", &opt);
	switch(opt)
	{
		case 1:
			printf("OK. Now enter the values to be Added with space: ");
			scanf("%f %f", &num1, &num2);
			printf("%0.2f + %0.2f = %0.2f", num1, num2, (num1 + num2));
			break;
		case 2:
			printf("OK. Now enter the values to be Substracted with space: ");
			scanf("%f %f", &num1, &num2);
			printf("%0.2f - %0.2f = %0.2f", num1, num2, (num1 - num2));
			break;
		case 3:
			printf("OK. Now enter the values to be Multiplied with space: ");
			scanf("%f %f", &num1, &num2);
			printf("%0.2f * %0.2f = %0.2f", num1, num2, (num1 * num2));
			break;
		case 4:
			printf("OK. Now enter the values to be Divide with space: ");
			scanf("%f %f", &num1, &num2);
			printf("%0.2f / %0.2f = %0.2f", num1, num2, (num1 / num2));
			break;
		default:
			printf("Wrong Command... Aborting...");
	}
	return 0;
}


