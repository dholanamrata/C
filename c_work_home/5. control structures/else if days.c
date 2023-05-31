#include<stdio.h>
main()
{
	int day,number;
	printf("enter the number");
	scanf("%d",&day);
	
	if(day==1)
	{
		printf("monday");
	}
	else if(day==2)
	{
		printf("tuesday");
	}
	else if(day==3)
	{
		printf("wednesday");
	}
	else if(day==4)
	{
		printf("thuresday");
	}
	else if(day==5)
	{
		printf("friday");
	}
	else if(day==6)
	{
		printf("saturday");
	}
	else
	{
		printf("sunday");
	}
	return 0;
}
