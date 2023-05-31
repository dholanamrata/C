#include<stdio.h>
main()
{
	int n,firstno,lastno,s=0;
	printf("enter the value");
	scanf("%d",&n);
	lastno=n%10;
	firstno=n;
	
	while(n>=10)
	{
		n=n/10;
	}
	firstno=n;
	s=firstno+lastno;
	printf("%d",s);
}
