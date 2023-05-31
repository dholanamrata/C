#include<stdio.h>
main()
{
	int a[100],n,i,c=0,ele;
	printf("Enter the number Elements ");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter Element to count frequnecy ");
	scanf("%d",&ele);
	
	for(i=0;i<n;i++)
	{
		if(a[i]==ele)
		{
			c++;
		}
	}
	printf("Frequnecy is = %d",c);
}
