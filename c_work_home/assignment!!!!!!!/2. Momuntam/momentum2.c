//C program to check a number is even or odd using ternary operator.
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the Number");
	scanf("%d",&a);
	(a%2==0) ? printf("Number is Even") : printf("Number is Odd");
	return 0;
}
