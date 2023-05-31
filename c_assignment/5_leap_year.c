#include <stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				printf("it is leap year");
			}
			else
			{
				printf("it is not leap year");
			}
		}
		else
		{
			printf("it is leap year");
		}
	}
	else
	{
		printf("it is not leap year");
	}
}
