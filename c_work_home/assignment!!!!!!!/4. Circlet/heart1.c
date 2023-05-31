#include<stdio.h>
main()
{
	int i,j,k;
	for(i=3;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("*",j);
		}
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(k=5;k>=i;k--)
		{
			printf(" ");
		}
		for(j=i;j>=1;j--)
		{
			printf("*",j);
		}
		for(j=2;j<=i;j++)
		{
			printf("*",j);
		}
		printf("\n");
	}
	for(i=1;i<=10;i++)
	{
		for(k=1;k<i;k++)
		{
			printf(" ");
		}
		for(j=10;j>=i;j--)
		{
			printf("*",j);
		}
		for(j=i;j<=10;j++)
		{
			printf("*",j);
		}
		printf("\n");
	}
}
