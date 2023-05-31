#include<stdio.h>
int main()
{
	char a[100];
	int i,j;
	printf("Enter String = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]==' ')
		{
			i++;
		}
		printf("%c",a[i]);	
	}
}
