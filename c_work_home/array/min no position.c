#include<stdio.h>
int main()
{
	int i,c,n,j,a[1000];
	printf("Enter the N number of elements= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0];
	for(i=0;i<n;i++)
	{
		if(c>a[i])
		{
			c=a[i];
			j=i;
		}
	}
	printf("Minimum number is = %d",c);
	printf("\n");
	printf("Position is = %d",j+1);
}
