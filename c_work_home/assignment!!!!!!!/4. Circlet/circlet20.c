#include<stdio.h>
main()
{
	int i,j,k,n,l;
	for(i=1;i<=4;i++)
	{
		for(k=4;k>i;k--)
		{
			printf("  ");
		}
		for(j=1;j<=1;j++)
		{
			printf("*");
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(k=1;k<i;k++)
		{
			printf("  ");
		}
		for(j=1;j<=1;j++)
		{
			printf("%c",n);
			n=42;
		} 
		printf("\n");
	}

}
