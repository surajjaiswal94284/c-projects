#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int i,n,c,count=0;
	char ch;
	clrscr();
	printf("This game is made by SURAJ JAISWAL");
	printf("\nWelcome in GUESSIMG THE NUMBER game");
	printf("\nRule:");
	printf("\nIn this game you have to input a number");
	printf("\nIf that number is correct then you win the game");
	printf("\nOtherwise it'll prompt to enter higher or lower number near guessing number");
	printf("\n---------------------------------------");
	printf("\nEnter y to play the game otherwise n to not: ");
	scanf("%c",&ch);
	if(ch=='n')
	{
		printf("Thank you");
	}
	else if(ch=='y')
	{
	printf("\nSo,lets start the game");
	srand(time(0));
	c=rand()%10+1;

	for(i=1;i!='n';i++)
	{
		printf("\nEnter the number: ");
		scanf("%d",&n);
		count++;
		if(n>c)
		{
			printf("\nInput lower number");
			continue;
		}
		else if(n<c)
		{
			printf("\nInput higher number");
			continue;
		}
		else
		{
			printf("\nYes you won the game");
			printf("\nYou took %d attempts to win the game",count);
			break;
		}
	}
	}	getch();
}
