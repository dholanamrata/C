#include<stdio.h>
int main()
{
	char ch;
	FILE *fptr;
	fptr=fopen("HELLO1.txt","r");
	while(1)
	{
		ch=fgetc(fptr);
		if(ch==EOF)
		{
			break;
		}
		printf("%c",ch);
	}
	fclose(fptr);
}
