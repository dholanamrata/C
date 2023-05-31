#include<stdio.h>
main()
{
	int a[1000],n,c,i,j;
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
			j=i;
		}
	}
	printf("Maximum numbern is= %d\n",c);
	printf("Position is = %d",j+1);
}
