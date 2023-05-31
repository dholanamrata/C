#include<stdio.h>
main()
{
	//int a,b=2,c=1;
	int n,i,c=0;
	printf("enter the number");
	scanf("%d",&n);
	
	/*while(b<a)
	{
		if(a%b==0)
		{
			c=0;
		}
		b++;
	}
	printf("%d\n",c);
	if(c==1)*/
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		printf("Prime number");
	}
	else
	{
		printf("Not Prime number");
	}
	return 0;
}
