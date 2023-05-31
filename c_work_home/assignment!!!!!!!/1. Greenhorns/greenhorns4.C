#include<stdio.h>
#include<conio.h>
main()
{
	int salary,hra=10,da=5,ta=8,gs;
	clrscr();
	printf("enter the salary=");
	scanf("%d",&salary);
	hra=salary*10/100;
	da=salary*5/100;
	ta=salary*8/100;
	gs=hra+da+ta+salary;
	printf("gross profit is =%d",gs);
	getch();

}