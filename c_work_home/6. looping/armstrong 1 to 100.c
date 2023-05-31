#include<stdio.h>
#include<math.h>
main()
{
	int a=10000,i,n,r,s;
	
	for(i=0;i<=a;i++)
	{
		n=i;
		s=0;
		while(n>0)
		{
			r=n%10;
			s=s+pow(r,4);
			n=n/10;
			
		}
		if(i==s)
		{
			printf("%d\n",i);
		}
	}
}
