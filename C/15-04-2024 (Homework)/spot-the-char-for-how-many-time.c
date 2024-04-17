// Write a C program to find whether the given character is present in the string or not. If the character is present, the program should count no of times/occurrences the character is present in the string.

#include<stdio.h>
#include<string.h>
int main()
{
	char str[50], tmp;
	int i, count=0;
	printf("Enter a text to count the Words: ");
	gets(str);
	printf("Character to Scan: ");
	scanf("%c", &tmp);
	for (i=0; i<strlen(str); i++)
	{
		if (str[i]==tmp)
		{
			count++;
		} 
	}
	if (count==0)
	{
		printf("Not Found!");
	}
	else
	{
		printf("Character Found %d times", count);
	}
	return 0;
}


