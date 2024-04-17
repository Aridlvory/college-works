/*
write a program to find the area and perimeter of a rectangle and display it
*/

#include<stdio.h>

int main()
{
	int length, breadth, area, perimeter;
	printf("Enter the Length and Breadth with space: ");
	scanf("%d%d",&length,&breadth);
	
	area = length * breadth;
	perimeter = 2 * (length + breadth);
	
	printf("\nThe Area of Rectangle: %d", area);
	printf("\nThe Perimeter of Rectangle: %d", perimeter);
	return 0;
}
