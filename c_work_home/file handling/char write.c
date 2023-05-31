#include<stdio.h>
int main()
{
	char n[100],i;
	FILE *fptr;
	fptr=fopen("HELLO.txt","w");
	printf("Enter the character =");
	gets(n);
	for(i=0;n[i]!=NULL;i++)
	{
		fputc(n[i],fptr);
	}
	return 0;
} 
