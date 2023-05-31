#include<stdio.h>
main()
{
	int n,c=0;
	printf("enter the value");
	scanf("%d",&n);
	
	while(n>0)
	{
		c++;
		n=n/10;
	}
	printf(" number of digit= %d",c);
}
