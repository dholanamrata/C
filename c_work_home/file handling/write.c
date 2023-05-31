#include<stdio.h>
int main()
{
	int num;
	FILE *fptr;
	fptr=fopen("DENISH.txt","w");
	printf("Enter the number = ");
	scanf("%d",&num);
	fprintf(fptr,"%d",num);
	fclose(fptr);
	return 0;
	
}  
