#include<stdio.h>
int main()
{
	int i,n,*p,a[10];
	p=&a;
	printf("Enter the Elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
    {
        scanf("%d",(p+i));
    }
    printf("Array is .....\n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",*(p+i));
	}
}
