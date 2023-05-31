#include<stdio.h>
int main()
{
    int a[100],b[100],n,i,j,c,k,l;
    printf("Enter the number Elements = ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=a[i];
    }
    printf("Enter the number of Rotation = ");
    scanf("%d",&k);
    
	// left rotation!!!!!!
    for(j=1;j<=k;j++)
    {
        c=a[n-1];
        for(i=n-2;i>=0;i--)
        {
            a[i+1]=a[i];
        }
        a[0]=c;
    }
    printf("Left Rotation is = ");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
    
	// Right rotation!!!!!!!
    for(j=1;j<=k;j++)
    {
        c=b[0];
        for(i=1;i<n;i++)
        {
            b[i-1]=b[i];
        }
        b[n-1]=c;
    }
    printf("\nRight Rotation is = ");
    for(i=0;i<n;i++)
    {
        printf("%d",b[i]);
    }
}
