#include<stdio.h>
int main()
{
	int a[100][100],i,j,n;
	printf("Enter the Number of Elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");	
	}
	printf("Transpose Matrix......\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d",a[j][i]);
		}
		printf("\n");	
	}	
}
