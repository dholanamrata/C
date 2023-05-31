#include<stdio.h>
int main()
{
	int mark;
	printf("Enter Studentn Mark:");
	scanf("%d", &mark);
	if(mark>=90)
	{
		printf("Student is awarded grade A");
	}
	else if(mark>=80 || mark>=90)
	{
		printf("Student is awarded grade B");
	}
	else if(mark>=70 || mark>=80)
	{
		printf("Student is awarded grade C");
	}
	else if(mark>=60 || mark>=50)
	{
		printf("Student is awarded grade D");
	}
	else 
	{
		printf("Student is awarded grade E");
	}
}
