#include<stdio.h>
int length(char a[]);

int main()
{
	int i,l;
	char a[100];
	printf("Enter String = ");
	gets(a);
	l=length(a);
	printf("Length of String = %d",l);
}

int length(char a[])
{
	int i,l=0;
	for(i=0;a[i]!=NULL;i++)
	{
		l++;
	}
	return l;
}
