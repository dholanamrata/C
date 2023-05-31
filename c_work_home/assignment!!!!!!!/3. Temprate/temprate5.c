#include<stdio.h>
main()
{
	int n,r,s=0,cn;
	printf("enter the value=");
	scanf("%d",&n);
	cn=n;
	while(n>0)
	{
		r=n%10;
		s=(s*10)+r;
		n=n/10;
	}
	if(s==cn)
	{
		printf(" %d is palindrome number",s);
	}
	else
	{
		printf(" %d is not palindrome number",s);
	}
}
