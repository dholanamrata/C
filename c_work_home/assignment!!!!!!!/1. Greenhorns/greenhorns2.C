#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter a is =");
	scanf("%d",&a);
	printf("enter b is =");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("enter value of a =%d",a);
	printf("enter value of b =%d",b);
	getch();
}
