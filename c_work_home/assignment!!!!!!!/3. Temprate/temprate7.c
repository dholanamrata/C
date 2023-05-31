#include<stdio.h>
main()
{
	int i,n,t1=0,t2=1,next_term;
	printf("enter the  value: ");
	scanf("%d", &n);
	printf("fibonacci series: ");
	
	for(i=1;i<=n;i++)
	{
		printf("%d,",t1);
		next_term=t1+t2;
		t1=t2;
		t2=next_term;
	}
	
	
}
