#include<stdio.h>
enum name {monday,tuesday,wednesday,thursday,friday,saturday,sunday};
int main()
{
	int i;
	for(i=monday;i<sunday;i++)
	{
		printf("%d\n",i);
	}
}

