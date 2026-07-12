#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
	int user,computer,userscore=0,computerscore=0;
	int ch;
	run:
	clrscr();

	textcolor(RED);
	gotoxy(22,1);
	cprintf("WElcome to rock,paper,scrisore GAME.");
	textcolor(GREEN);
	gotoxy(1,3);
	cprintf("your score=%d",userscore);
	textcolor(YELLOW);
	gotoxy(60,3);
	cprintf("computer score=%d",computerscore);
	gotoxy(1,5);

	printf("1-->rock");
	printf("\n2-->paper");
	printf("\n3-->serisore");
	printf("\n4-->Exit");
	printf("\nEnter your choice=");
	scanf("%d",&ch);


	switch(ch)
	{
		case 1:user=1;
			break;
		case 2:user=2;
			break;
		case 3:user=3;
			break;
		case 4:
			exit(0);

		default:printf("\n\nplese Enter right choice 1,2,3,4 !!");
			getch();
			exit(0);
	}
	srand(time(0));
	computer=rand()%3+1;


	if(user==1)
	{
		printf("\nyou selected rock");
	}
	else if(user==2)
	{
		printf("\nyou selected paper");
	}
	 else if(user==3)
	{
		printf("\nyou selected serisore");
	}

	if(computer==1)
	{
		printf("\n\ncomputer selected rock");
	}
	else if(computer==2)
	{
		printf("\n\ncomputer selected paper");
	}
	else if(computer==3)
	{
		printf("\n\ncomputer selected serisore");
	}


	if(user == computer)
	{
		printf("\nThis round is drow");
	}

	else if(user==1 && computer==3 || user==2 && computer==1 || user==3 && computer==2)
	{
		printf("\nyou win this round");
		userscore++;
	}
	else
	{
		printf("\ncomputer win this round");
		computerscore++;
	}


	if(userscore==5)
	{
		clrscr();
		sound(200);
		delay(200);
		nosound();
		gotoxy(30,13);
		textcolor(RED);
		cprintf("you win this match");
		getch();
		exit(0);

	}
	else if(computerscore==5)
	{
		clrscr();
		sound(200);
		delay(200);
		nosound();
		textcolor(RED);
		gotoxy(30,13);

		cprintf("computer win this match");
		getch();
		exit(0);
	}
	getch();
	goto run;

}
