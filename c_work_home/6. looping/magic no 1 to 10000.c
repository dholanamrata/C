#include<stdio.h>
main()
{
	int a=10000,i,d,n,r,s;
	
	for(i=1;i<=a;i++)
	{
		n=i;
		s=1;
		d=0;
		while(n>0)
		{
			r=n%10;
			s*=r;
			d+=r;
			n=n/10;	
		}
		if(d==s)
		{
			printf("%d\n",i);
		}
	}
}
