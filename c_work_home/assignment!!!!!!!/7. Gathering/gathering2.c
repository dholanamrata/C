#include<stdio.h>
int sum(int a[],int n);

main()
{
	int i,l,n,a[100];
	printf("Enter the Elements = ");
	scanf("%d",&n);
	printf("Enter Array Elements...\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	l=sum(a,n);
	printf("Sum of Array = %d",l);
}

int sum(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	return s;
}
