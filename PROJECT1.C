#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
	int i,c_chose,u_chose;
	char ch;
	clrscr();
	printf("This game is made by SURAJ JAISWAL");
	printf("\nPress y/n to start or to exit the game: ");
	scanf("%c",&ch);
	switch(ch)
	{
	case 'y':
	printf("Welcome to the game of ROCK,PAPER and SCISSOR");
	printf("\n1.Rock");
	printf("\n2.Paper");
	printf("\n3.Scissor");
	printf("\nChoose any one option between above= ");
	scanf("%d",&u_chose);
	printf("User has choosen= ");
	switch(u_chose)
	{
		case 1:
		printf("ROCK");
		break;
		case 2:
		printf("PAPER");
		break;
		case 3:
		printf("SCISSOR");
		break;
		default:
		printf("Invalid");
	}
	srand(time(0));
	c_chose=rand()%3+1;
	printf("\nComputer has choosen= ");
	switch(c_chose)
	{
		case 1:
		printf("ROCK");
		break;
		case 2:
		printf("PAPER");
		break;
		case 3:
		printf("SCISSOR");
		break;
	}
	if(u_chose==c_chose)
	{
		printf("\nGame is tie");
	}
	else if(u_chose==2 && c_chose==1 ||
		u_chose==1 && c_chose==3 ||
		u_chose==3 && c_chose==2)
	{
		printf("\nUser has won the game");
	}
	else if(u_chose>3)
	{
		printf("\nNo result");
	}
	else
	{
		printf("\nComputer has won the game");
	}
	break;
	case 'n':
	printf("\nThank you");
	break;
	}
	getch();
}
