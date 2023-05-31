#include<stdio.h>
main()
{
	int no1,no2,sum,sub,mul,div;
	char ch;
	printf("enter the no1=");
	scanf("%d",&no1);
	printf("enter the no2=");
	scanf("%d",&no2);
	
	printf("\n press '+' for addition\n press '-' for subtraction\n press '*' for multiplication\n press '/' for division\n\n");
	
	printf("enter your choice=");
	scanf(" %c",&ch);
	
	switch(ch)
	{
		case '+':
		sum=no1+no2;
		printf("addition is=%d",sum);
		break;
		
		case '-':
		sub=no1-no2;
		printf("subtraction is=%d",sub);
		break;
		
		case '*':
		mul=no1*no2;
		printf("multplication is=%d",mul);
		break;
		
		case '/': 
		div=no1/no2;
		printf("division is=%d",div);
		break;
	}
}
