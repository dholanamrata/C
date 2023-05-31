#include<stdio.h>
#include<conio.h>
main()
{
 int salary,hra=15,ta=8,da=5,a,b,c,gs;
 clrscr();
  printf("enter your salary");
  scanf("%d",&salary);

  a=salary*15/100;
  b=salary*8/100;
  c=salary*5/100;
  gs=a+b+c+salary;

  printf("gs is=%d",gs);
  getch();
}
