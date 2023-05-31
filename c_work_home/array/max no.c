#include<stdio.h>
main()
{
	int a[1000],n,c,i;
	printf(" Enter the number Elements= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	c=a[0];
	for(i=0;i<n;i++)
	{
		if(c<a[i])
		{
			c=a[i];
		}
	}
		printf("Maximum numbern is= %d",c);
}
