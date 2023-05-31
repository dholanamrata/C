#include<stdio.h>
int main()
{
	int i,n=0,up=0,lo=0,num=0,sp=0;
	char a[100];
	
	printf("Enter Password = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		n++;
		if(a[i]>='A' && a[i]<='Z')
		{
			up++;
		}
		else if(a[i]>='a' && a[i]<='z')
		{
			lo++;
		}
		else if(a[i]>='0' && a[i]<='9')
		{
			num++;
		}
		else
		{
			sp++;
		}
	}
	if(n>8 && up>0 && lo>0 && num>0 && sp>0)
	{
		printf("Valid Password");
	}
	else
	{
		printf("Invalid Password");
	}
}
