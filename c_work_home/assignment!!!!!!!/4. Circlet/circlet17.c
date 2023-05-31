#include<stdio.h>
main()
{
	int i,j,k,l;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	for(l=2;l<=5;l++)
	{
		for(k=1;k<l;k++)
		{
			printf(" ");
		}
		for(j=l;j<=5;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
