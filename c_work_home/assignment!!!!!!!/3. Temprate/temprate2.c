#include<stdio.h>
main()
{
	int n=1,i;
	printf("Table of which number = ");
	scanf("%d",&i);
	do
	{
		printf("%d * %d = %d\n",i,n,i*n);
		n++;
		
	}
	while(n<=10);
}
