#include<stdio.h>
int main()
{
	char a[100];
	int c=0,i,j;
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
		if(c>0)
		{
			printf("%c is %d times\n",a[i],c);
		}
		c=0;
	}
}
	
