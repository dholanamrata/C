#include<stdio.h>
main()
{
	int i,j,k;
	for(i=1;i<=5;i++)
	{
		for(k=5;k>i;k--)
		{
			printf(" ");
		}
		for(j=i;j<i*2-1;j++)
		{
			printf("%d",j);
		}
		for(j=i*2-1;j>=i;j--)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
