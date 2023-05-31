#include<stdio.h>
int main()
{
	int i,j,n=0,c=0;
	char a[100],b[100];
	
	printf("Enter String = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		n++;
	}
	printf("Reverse String = ");
	j=0;
	for(i=n-1;i>=0;i--,j++)
	{
		printf("%c",a[i]);
		b[j]=a[i];
	}
	for(j=0;a[j]!=NULL;j++)
	{
		if(a[j]==b[j])
		{
			c++;
		}
	}
	printf("\n");
	if(n==c)
	{
		printf("Palindrome\n");
	}
	else
	{
		printf("Not Plindrome");
	}
}
