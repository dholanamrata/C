#include<stdio.h>
#include<conio.h>
main()
{
	int a=10,b=20,c;
	clrscr();
	printf("A is =%d\n",a);
	printf("B is =%d\n",b);
	c=a;
	a=b;
	b=c;
	printf("A is =%d\n",a);
	printf("B is =%d\n",b);
	getch();
}
