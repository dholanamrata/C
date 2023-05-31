#include<stdio.h>
int main()
{
	int i,j,n,a[100][100],b[100][100],c[100][100];
	printf("Enter the number of Elements = ");
	scanf("%d",&n);
	
	printf("A...\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("B...\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	printf("Matrix Addition of 2D Array ...\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%d ",c[i][j]);
		}
		printf("\n");
	}
}
