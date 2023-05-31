#include<stdio.h>
int main()
{
    int a,n,i,j,*p;
    printf("Enter Elements = ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Reverse Array .....\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d\n",*(p+i));
    }
} 
