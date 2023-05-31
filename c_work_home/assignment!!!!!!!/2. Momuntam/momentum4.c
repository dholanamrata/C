//C program use switch statement. Display Monday to Sunday.
#include<stdio.h>
int main()
{
	char ch,s,M,T,W,t,F,S;
	
	printf(" press 's' for Sunday \n press 'M' for Monday \n press 'T' for Tuesday \n press 'W' for wednesday \n press 't' for Thrusday \n press 'F' for Friday \n press 'S' for Saturday\n\n");
	
	printf("Enter the character= ");
	scanf("%c", &ch);
	
	switch(ch)
	{
		case 's':
			printf("Sunday");
			break;
		case 'M':
			printf("Monday");
			break;
		case 'T':
			printf("Tuesday");
			break;
		case 'W':
			printf("Wednesday");
			break;
		case 't':
			printf("Thrusday");
			break;
		case 'F':
			printf("Friday");
			break;
		case 'S':
			printf("Saturday");
			break;
		default:
			printf("wrong choice");	
	}
	return 0; 
}
