#include<stdio.h>
int ret(char *p);

main()
{
	int i;
	char a[100],*l;
	printf("Enter String = ");
	scanf("%[^\n]s",&a);
	l=ret(a);
	printf("%s",l);
}

int ret(char *p)
{
	char **q;
	q=&p;
	return &q;
}
