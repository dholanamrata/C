//C program to find out max from 4 numbers using nested if.
#include<stdio.h>
 int main()
{
	int no1,no2,no3,no4;
	printf("Enter no1=");
	scanf("%d",&no1);
	printf("Enter no2=");
	scanf("%d",&no2);
	printf("Enter no3=");
	scanf("%d",&no3);
	printf("Enter no4=");
	scanf("%d",&no4);
	
	if(no1>no2)
	{
		if(no1>no3)	
		{
			if(no1>no4)
			{
				printf("No1 is big...");
			}
			else 
			{
				printf("No4 is big...");
			}
		}
		else
		{
			if(no3>no4)
			{
				printf("No3 is big...");
			}
			else
			{
				printf("No4 is big...");
			}
		}
		
	}
	else
	{	
		if(no2>no3)	
		{
			if(no2>no4)
			{
				printf("No2 is big...");
			}
			else 
			{
				printf("No4 is big...");
			}
		}
		else
		{
			if(no3>no4)
			{
				printf("No3 is big...");
			}
			else
			{
				printf("No4 is big...");
			}
		}
	}
	return 0;
	
}
