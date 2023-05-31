#include<stdio.h>
int main()
{
	int i,c,n,a[1000];
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
		}
	}
	printf("Mininum number is = %d",c);
}
