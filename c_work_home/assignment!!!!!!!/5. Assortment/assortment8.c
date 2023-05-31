#include<stdio.h>
int main()
{
	int i,j,n,sum=0,a[10][10];
	printf("Enter the number of Elements = ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	
	printf("Diagonals......\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%d\n",a[i][j]);
				sum=sum+a[i][j];
			}
		}
	}
	printf("Sum of Diagonals Elements = %d\n",sum);
}
