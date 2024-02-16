/*
Write a program to find greatest of four numbers using nested if statement
*/

#include<stdio.h>
int main()
{
	int a, b, c, d;
	printf("Enter 4 numbers with space: ");
	scanf("%d%d%d%d", &a, &b, &c, &d);
	int result;

    if ( a > b ) {
        if ( a > c ) {
            if ( a > d ) {
                result = a;
            }
            else {
                result = d;
            }
        }
        else if ( c > d ) {
            result = c;
        }
        else {
            result = d;
        }
    }
    else if ( b > c ) {
        if ( b > d ) {
            result = b;
        }
        else {
            result = d;
        }
    }
    else if ( c > d ) {
        result = c;
    }
    else {
        result = d;
    }
    printf("%d is greratest", result);
}
