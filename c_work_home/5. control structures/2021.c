#include<stdio.h>
main()
{
	int ch;
	printf("enter your choice");
	scanf("%d",&ch);
	
	if(ch<=31)
	{
		printf("%d ",ch);
		printf("january ");
		
	}
	else if (ch<=59)
	{
		printf("%d ",ch-31);
		printf("febury ");	
	}
	else if(ch<=90)
	{
		printf("%d ",ch-59);
		printf("march ");	
	}
	else if(ch<=120)
	{
		printf("%d ",ch-90);
		printf("april ");
		
	}
	else if(ch<=151)
	{
		printf("%d ",ch-120);
		printf("may ");
	
	}
	else if(ch<=181)
	{
		printf("%d ",ch-151);
		printf("june ");
	
	}
	else if(ch<=212)
	{
		printf("%d ",ch-181);
		printf("july");
	
	}
	else if(ch<=243)
	{
		printf("%d ",ch-212);
		printf("auguest ");
		
	}
	else if(ch<=273)
	{
		printf("%d ",ch-243);
		printf("september ");
		
	}
	else if(ch<=304)
	{
		printf("%d ",ch-273);
		printf("october ");
		
	}
	else if(ch<=334)
	{
		printf("%d ",ch-304);
		printf("november ");
		
	}
	else
	{
		printf("%d ",ch-334);
		printf("december ");
		
	}
	{
		
		if(ch%7==1)
		{
			printf("friday");
		}
		else if(ch%7==2)
		{
			printf("saturday");
		}
		else if(ch%7==3)
		{
			printf("sunday");
		}
		else if(ch%7==4)
		{
			printf("monday");
		}
		else if(ch%7==5)
		{
			printf("tuesday");
		}
		else if(ch%7==6)
		{
			printf("wednesday");
		}
		else
		{
			printf("thuresday");
		}
	}
}
