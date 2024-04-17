// Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char str[50];
	int i, alpha=0, digit=0, special=0;
	printf("Enter a text: " );
	gets(str);
	for(i=0; i<strlen(str); i++)
	{
		if((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
		{
			alpha++;
		}
		else if(str[i] >= '0' && str[i] <= '9')
		{
			digit++;
		}
		else
		{
			special++;
		}
	}
	printf("Number of alphabets: %d", alpha); 
	printf("\nNumber of digits: %d", digit);
	printf("\nNumber of Special Characters: %d", special);
	return 0;
}


