// Write a program to find roots of a quadratic equation ax^2+bx+c=0

#include <stdio.h>
#include <math.h>
int main()
{
	float a, b, c, d, r, r1, r2, i;
	printf("Enter the coefficients of x^2, x and the constant with space: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0)
	{
		printf("The Equation is linear");
	}
	else
	{
		d = (b * b) - (4 * a * c);
		if (d == 0)
		{
			r = -b / (2 * a);
			printf("The roots are real and equal: %f", r);
		}
		else
		{
			if (d > 0)
			{
				d = sqrt(d);
				r1 = (-b + (d)) / (2 * a);
				r2 = (-b - (d)) / (2 * a);
				printf("The Roots are real and unequal: x1 = %f\tx2 = %f", r1, r2);
			}
			else
			{
				r = -b / (2 * a);
				d = -d;
				i = (sqrt(d)) / (2 * a);
				r1 = r + i;
				r2 = r - i;
				printf("The Roots are not real and unequal: x1 = %f\tx2 = %f", r1, r2);
			}
		}
	}
}

