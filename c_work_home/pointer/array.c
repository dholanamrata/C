#include<stdio.h>
int main()
{
	int i,*p,a[10]={10,20,30,40,50,60};
	p=&a;
	for(i=0;i<6;i++)
	{
		printf("%d\n",*(p+i));
	}
}
