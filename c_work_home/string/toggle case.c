#include<stdio.h>
int main()
{
	char a[100],i;
	printf("Enter String = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		else if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]-32;
		}
	}
	printf("%s",a);
}
