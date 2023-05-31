#include<stdio.h>
int main()
{
	int n,i,j,a[100],b[100];
	printf(" Enter the N number of Elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	j=0;
	for(i=n-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	}
	printf("Reverse array is..........\n");
	for(j=0;j<n;j++)
	{
		printf("%d\n",b[j]);
	}
}
