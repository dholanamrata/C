#include<stdio.h>
#include<math.h>
main()
{
	int n,r,s=0,c=0,c1n,c2n;
	printf("enter the value");
	scanf("%d",&n);
	c1n=c2n=n;
	
	while(n>0)
	{
		c++;
		n=n/10;
	}
	while(c1n>0)
	{
		r=c1n%10;
		s=s+pow(r,c);
		c1n=c1n/10;
	}
	if(s==c2n)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not armstrong number");
	}
}
