#include<stdio.h>
int main()
{
    int a[1000],c,i,k,n,j;
    printf("Enter the N number of Elements = ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the number of rotation = ");
    scanf("%d",&k);
	for(j=1;j<=k;j++)
	{
		c=a[n-1];
		for(i=n-2;i>=0;i--)
		{
			a[i+1]=a[i];
		}
		a[0]=c;
		
	}
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
	    }
	    printf("\n");
	  
}
