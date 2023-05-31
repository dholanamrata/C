#include<stdio.h>
main()
{
	int n,r,s=0;
	printf("enter the value");
	scanf("%d",&n);
	n=n/10;
	
	while(n>100)
	{
		r=n%10;
		s=s+r;
		n=n/10;
	}
	printf("%d",s);
}
