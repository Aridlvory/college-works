/*
Write a program to divide any number by another and display the quotient and remainder
*/

#include<stdio.h>

int main()
{
	int num1, num2, quotient, remainder;
	num1 = 25;
	num2 = 6;
	quotient = num1/num2;
	remainder = num1%num2;
	
	printf("The Quotient is %d\n",quotient);
	printf("The Remainder is %d\n",remainder);
}
