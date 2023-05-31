#include<stdio.h>
#include<conio.h>
main()
{	int leap_year;
	//clrscr();
	printf("enter the year");
	scanf("%d",&leap_year);
	if(leap_year%4==0)
	{
		printf("yes",leap_year);
	}
	else
	{
		printf("no",leap_year);
	}
	getch();
}
