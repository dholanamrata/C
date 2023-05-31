#include<stdio.h>
#include<conio.h>
main()
{
	int a,b;
	clrscr();
	printf("enter value a");
	scanf("%d",&a);
	printf("enter value b");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("value of a=%d\n",a);
	printf("value of b=%d\n",b);
	getch();
}
