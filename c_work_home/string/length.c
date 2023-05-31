#include<stdio.h>
int main()
{
	char i,a[100];
	int c=0;
	printf("Enter String = ");
	gets(a);
	for(i=0;a[i]!=NULL;i++)
	{
		i++;
	} 
	printf("%d",i);
}
