#include<stdio.h>
int fac(int n);

main()
{
	int i,n;
	printf("Enter the value = ");
	scanf("%d",&n);
	i=fac(n);
	printf("Factorial is = %d",i);
}

int fac(int n)
{
	if(n==1)
		return 1;
	else
		return n*fac(n-1);
}
