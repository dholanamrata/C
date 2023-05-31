#include<stdio.h>
int main()
{
	int num;
	FILE *fptr;
	fptr=fopen("DENISH1.txt","r");
	if(fptr==NULL)
	{
		printf("Error! opening file");
		exit(1);
	}
	fscanf(fptr,"%d",&num);
	printf("%d",num);
	fclose(fptr);
	return 0;
	
}
