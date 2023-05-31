#include<stdio.h>
main()
{
	int i=0;
	while(i<=100)
	{
		if(i%10==1||i%10==3||i%10==9)
		{
			printf("%d  ",i);
		}
		i++;
	}
}

