#include <stdio.h>
#include<math.h>
int main()
{
	double principle, rate, time, ci;
	printf("Enter principle amount :");
	scanf("%lf", &principle);
	printf("Enter rate: ");
	scanf("%lf", &rate);
	printf("Enter time: ");
	scanf("%lf", &time);
	ci = principle * pow(1 + (rate / 100), time) - principle;
	printf("Compaund Interest: %2lf", ci);
}
