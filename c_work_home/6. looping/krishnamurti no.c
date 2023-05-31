#include<stdio.h>
main()
{
	int n,cn,f=1,r,s=0;
	printf("enter the value");
	scanf("%d",&n);
	cn=n;
	while(n>0)
	{
		f=1;
		r=n%10;
		
		while(r>=1)
		{
			f=f*r;
			r--;
		}
		s=s+f;
		n=n/10;
	}
	if(s==cn)
	{
		printf("number is krishnamurthy number\n");
	}
	else
	{
		printf("number is not krishnamurthy number\n");
	}
}
