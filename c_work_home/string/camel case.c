#include<stdio.h>
int main()
{
	char a[100],i;
	printf("Enter String = ");
	gets(a);
	if(a[0]>='a' && a[0]<='z')
	{
		a[0]=a[0]-32;
	}
	for(i=1;a[i]!=NULL;i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		{
			a[i]=a[i]+32;
		}
		if(a[i]==' ')
		{
			i++;
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		}
	}
	printf("%s",a);
}
