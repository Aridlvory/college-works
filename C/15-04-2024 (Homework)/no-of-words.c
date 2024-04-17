// Write a program in C to count the total number of words in a string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50];
	int i, count=0;
	printf("Enter a text to count the Words: ");
	gets(str);
	for (i=0; i<strlen(str); i++)
	{
		if (str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
			count++;
		} 
	}
	printf("No of Words: %d", count+1);
	return 0;
}


