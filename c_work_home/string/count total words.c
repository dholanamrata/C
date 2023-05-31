#include<stdio.h>
int main()
{
	char i,a[100];
	int c=1;
	printf("Enter String = ");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			c++;
		}
	}
	printf("%d",c);
}
