#include<stdio.h>
main()
{
	int a[1000],n,c,i,minpos,maxpos,min,max;
	printf(" Enter the number Elements= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(max<a[i])
		{
			max=a[i];
			maxpos=i;
		}
	}
	printf("\nMaximum number is= %d",max);
	printf("\nPosition is = %d",maxpos+1);
	
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(min>=a[i])
		{
			min=a[i];
			minpos=i;
		}
	}
	printf("\nMinimum number is = %d",min);
	printf("\nPosition is = %d",minpos+1);
	
	 c=a[maxpos];
	a[maxpos]=a[minpos];
	a[minpos]=c;
	
	printf("\nAfter Swapping........\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = %d\n",i,a[i]);
	}
}
