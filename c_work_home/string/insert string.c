#include<stdio.h>
int main()
{
	int i,j,n=0,k=0,pos;
	char a[100],b[100],c[100];
	
	printf("Enter String = ");
	gets(a);
	printf("Enter the String to Insert = ");
	gets(b);
	printf("Enter the Position = ");
	scanf("%d",&pos);
	
	for(i=0;a[i]!=NULL;i++)
	{
		n++;
	}
	for(i=0;b[i]!=NULL;i++)
	{
		k++;
	}
	for(i=n-1;i>=pos;i--)
	{
		a[i+k+1]=a[i];	
	}
	for(i=0;i<k;i++)
	{
		a[pos]=b[i];
		pos++;
	}
	a[pos]=' ';
	for(i=0;a[i]!=NULL;i++)
	{
		printf("%c",a[i]);
	}
}
