#include<stdio.h>
int main()
{
    int a[100],i,j,n;
    printf("Enter the Number of Elements = ");
    scanf("%d",&n);
    
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Negative Elements are = ");
    for(i=0;i<n;i++)
    {
        if(0>a[i])
        {
            printf("%d ",a[i]);
        }
        
    }
    
}
