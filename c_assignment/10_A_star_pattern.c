#include<stdio.h>
int main()
{
	// int i,j,k;
	// for(i=5;i>=1;i--)
	// {
	// 	for(k=1;k<i;k++)
	// 	{
	// 		printf(" ");
	// 	}
	// 	for(j=5;j>=i;j--)
	// 	{
	// 		printf("%d",j);
	// 	}
	// 	for(j=i;j<5;j++)
	// 	{
	// 		printf("%d",j+1);
	// 	}
	// 	printf("\n");
	// }
	int i,j,k,space=5;
	for(i=1; i<=6; i++)
	{
		for(k=1; k<=space; k++)
		{
			printf(" ");
		}
		for(j=1; j<=i; j++)
		{
			printf("* ");
		}
		printf("\n");
		space--;
	}
	
}
