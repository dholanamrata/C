#include<stdio.h>
int main()
{
	int a,b,*p,*q;
	printf("Enter A value = ");
	scanf("%d",&a);
	printf("Enter B value = ");
	scanf("%d",&b);
	p=&a;
	q=&b;
	printf("Addition is = %d",*p+*q);
}
