#include<stdio.h>
int main()
{
	int i,num1,num2,num3,largestNumber;
	
		printf("Enetr number1: ");
		scanf("%d",&num1);
		printf("Enetr number2: ");
		scanf("%d",&num2);
		printf("Enetr number3: ");
		scanf("%d",&num3);
		if(num1>=num2 || num1>=num3)
		{
			printf("%d is Larger number",num1);
		}
		else if(num2>=num1 || num2>=num3)
		{
			printf("%d is Larger number",num2);
		}
		else
		{
			printf("%d is Larger number",num3);
		}
		
	
}
