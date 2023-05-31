#include<stdio.h>
main()
{
	int a[100],i,n,j,k,c;
	printf("Enter Number of Elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	k=a[0];
	for(i=0;i<n;i++)
	{

		if(k<a[i])
		{
			k=a[i];
		}
	}
	printf("Largest number : %d\n",k);
	c=k;
	k=a[0];
	for(i=0;i<n;i++)
	{
		if(k<a[i] && a[i]!=c)
		{
			k=a[i];
		}

	}
	printf("second largest number is %d",k);
}
