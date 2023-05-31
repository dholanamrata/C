#include<stdio.h>
int main()
{
	int i,k=0;
	char n,*p;
	printf("Enter the String = ");
	gets(p);
	for(i=0;*p!=NULL;i++)
	{
		k++;
		p++;
	}
	printf("Length is = %d",k);
}

