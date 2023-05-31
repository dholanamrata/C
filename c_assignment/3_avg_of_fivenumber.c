#include<stdio.h>
int main()
{
	int num,sum=0,i,avg;
	for(i=0; i<=5; i++)
	{
		printf("Enter random number:");
		scanf("%d",&num); 
		sum=sum+num;                                                       
	}
	avg=sum/5;
	printf("Sum value is= %d\n", avg);
	return 0;
}
