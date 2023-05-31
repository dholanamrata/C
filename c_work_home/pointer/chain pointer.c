#include<stdio.h>
int main()
{
	int a,*p,**q,***r;
	printf("Enter A = ");
	scanf("%d",&a);
	p=&a;
	q=&p;
	r=&q;
	printf("P is = %d\n Q is = %d\n R is = %d",*p,**q,***r);
}
