#include<stdio.h>
main()
{
	int n,f=1;
	printf("enter the number=");
	scanf("%d",&n);
	
	while(n>=1)
	{
		f=f*n;
		n--;
	}
	printf("factorial of number is %d =%d",n,f);
	
}
