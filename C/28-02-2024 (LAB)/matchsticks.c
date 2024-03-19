// Matchsticks

#include<stdio.h>
int main()
{
	int stick = 21, i, opt, cmp;
	for (i = stick; stick>1;)
	{
		printf("%d number of matchstick present \n", stick);
		printf("What do you want to do? \n");
		printf("(4) Pick 4 sticks \n");
		printf("(3) Pick 3 sticks \n");
		printf("(2) Pick 2 sticks \n");
		printf("(1) Pick a stick \n");
		scanf("%d", &opt);
		switch(opt)
		{
			case 4:
				stick -= 4;
				stick -= (5 - (4 % 5));
				printf("Computer Picks: %d\n", (5 - (4 % 5)));
				break;
			case 3:
				stick -= 3;
				stick -= (5 - (3 % 5));
				printf("Computer Picks: %d\n", (5 - (3 % 5)));
				break;
			case 2:
				stick -= 2;
				stick -= (5 - (2 % 5));
				printf("Computer Picks: %d\n", (5 - (2 % 5)));
				break;
			case 1:
				stick -= 1;
				stick -= (5 - (1 % 5));
				printf("Computer Picks: %d\n", (5 - (1 % 5)));
				break;
			default:
				printf("Wrong Command... Try Again\n");
		}
	}
	if (stick == 1)
	{
		printf("You Lose! Bye");
	}
	else
	{
		printf("You win!");
	}
}
