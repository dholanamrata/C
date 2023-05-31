#include<stdio.h>
main()
{
	int hindi,gujarati,english,total,percentage;
	printf("enter marks for hindi=");
	scanf("%d",&hindi);
	printf("enter marks for gujarati=");
	scanf("%d",&gujarati);
	printf("enter marks for english=");
	scanf("%d",&english);
	
	total=hindi+gujarati+english;
	printf("total is=%d\n",total);
	percentage=total/3;
	printf("percentage is=%d\n",percentage);
	
	if(percentage>=90)
	{
		printf("a+ grade");
	}
	else if(percentage>=80)
	{
		printf("a grade");
	}
	else if(percentage>=70)
	{
		printf("b grade");
	}
	else if(percentage>=60)
	{
		printf("c grade");
	}
	else if(percentage>=50)
	{
		printf("d grade");
	}
	else if(percentage>=40)
	{
		printf("e grade");
	}
	else
	{
		printf(" you are fail");
	}
		
}
