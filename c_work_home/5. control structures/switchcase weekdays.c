#include<stdio.h>
main()
{
	int ch,date;
	printf("enter your choice");
	scanf("%d",&ch);
	ch=ch%7;
	
	switch(ch)
	{
		case 4:
			printf("monday");
			break;
		case 5:
			printf("tuesday");
			break;
		case 6:
			printf("wednesday");
			break;
		case 0:
			printf("thuresday");
			break;
		case 1:
			printf("friday");
			break;
		case 2:
			printf("saturday");
			break;
		case 3:
			printf("sunday");
			break;		
	}
	return 0;		
}
