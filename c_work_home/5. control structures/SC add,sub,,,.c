#include<stdio.h>
main()
{
	int ch,no1,no2,sum,sub,mul,div;
	printf("enter the no1=");
	scanf("%d",&no1);
	printf("enter the no2=");
	scanf("%d",&no2);
	
	printf("\n press 1 for addition\n press 2 for subtraction\n press 3 for multiplication\n press 4 for division\n\n");
	
	printf("enter your choice=");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:
		sum=no1+no2;
		printf("addition is=%d",sum);
		break;
		
		case 2:
		sub=no1-no2;
		printf("subtraction is=%d",sub);
		break;
		
		case 3:
		mul=no1*no2;
		printf("multplication is=%d",mul);
		break;
		
		case 4: 
		div=no1/no2;
		printf("division is=%d",div);
		break;
	}
}
