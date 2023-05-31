#include<stdio.h>
main()
{
	int no1,no2,no3,no4;
	printf("enter no1=");
	scanf("%d",&no1);
	printf("enter no2=");
	scanf("%d",&no2);
	printf("enter no3=");
	scanf("%d",&no3);
	printf("enter no4=");
	scanf("%d",&no4);
	
	if(no1>no2)
	{
		if(no1>no3)	
		{
			if(no1>no4)
			{
				printf("no1 is big...");
			}
			else 
			{
				printf("no4 is big...");
			}
		}
		else
		{
			if(no3>no4)
			{
				printf("no3 is big...");
			}
			else
			{
				printf("no4 is big...");
			}
		}
		
	}else
	{	
		if(no2>no3)	
		{
			if(no2>no4)
			{
				printf("no2 is big...");
			}
			else 
			{
				printf("no4 is big...");
			}
		}
		else
		{
			if(no3>no4)
			{
				printf("no3 is big...");
			}
			else
			{
				printf("no4 is big...");
			}
		}
	}
	
}
