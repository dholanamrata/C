#include<stdio.h>
int main()
{
	int i,j,k=0,n,a[100];
	printf("Enter the number Elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j])
			{
				k++;
			}
		}
		printf("%d is %d times\n",a[i],k);
		k=0;
	}
}
