#include<stdio.h>
int main()
{
	int a,b,c,*p,*q;
	printf("Enter A = ");
	scanf("%d",&a);
	printf("Enter B = ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	c=*p;
	*p=*q;
	*q=c;
	printf("A is = %d \n B is = %d",a,b);
}
