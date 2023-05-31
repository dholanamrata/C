#include<stdio.h>
int main()
{
	int i,j,c=0;
	char a[100];
	printf("Enter String = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=0;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				c++;
			}
		}
		printf("%c is %d times\n",a[i],c);
		c=0;	
	}
}
