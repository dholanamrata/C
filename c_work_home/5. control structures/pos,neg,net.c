#include<stdio.h>
#include<conio.h>
main()
{
	int a;
	printf("enter the number");
	scanf("%d",a);
	if(a>0)
	{
		printf("positve");
	}
	if(a<0)
	{
		printf("negative");
	}
	if(a==0)
	{
		printf("netural");
	}
	getch();
}
