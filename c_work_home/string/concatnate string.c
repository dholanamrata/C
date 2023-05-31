#include<stdio.h> 
int main()
{
	int i,j;
	char a[100],b[100],c[100];
	printf("Enter String A = ");
	gets(a);
	printf("Enter String B = ");
	gets(b);
	
	for(i=0;a[i]!=NULL;i++)
	{
		c[i]=a[i];
	}
	c[i]=' ';
	for(j=0;b[j]!=NULL;j++)
	{
		i++;
		c[i]=b[j];
	}
	printf("%s",c);
}
