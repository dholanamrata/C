#include<stdio.h>
int main()
{
	int i,j,k;
	char a[100];
	printf("Enter String = ");
	gets(a);
	
	for(i=0;a[i]!=NULL;i++)
	{
		for(j=i+1;a[j]!=NULL;j++)
		{
			if(a[i]==a[j])
			{
				for(k=j;a[k]!=NULL;k++)
				{
					a[k]=a[k+1];	
				}	
			}		
		}		
	}
	printf("%s",a);	
} 
