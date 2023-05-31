#include<stdio.h>
main()
{
	int n,s=1,d=0,r;
	printf("enter the value");
	scanf("%d",&n);
	 while(n>0)
	 {
	 	r=n%10;
	 	s=r*s;
	 	d=r+d;
	 	n=n/10;
	 }
	 if(d==s)
	 {
	 	printf("magic number");
	 }
	 else
	 {
	 	printf("not magic number");
	 }
}
