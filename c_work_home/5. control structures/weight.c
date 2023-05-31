#include<stdio.h>
#include<conio.h>
main()
{
	int weight;
	clrscr();
	printf("enter the weight=");
	scanf("%d",&weight);
	if(weight>50 && weight<80)
	{
		printf("good");
	}
	else
	{
		printf("bad");
	}
	getch();
}

