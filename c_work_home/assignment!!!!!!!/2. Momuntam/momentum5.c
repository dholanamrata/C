// C program to input electricity unit charges and calculate total electricity bill according to the given condition:
//For first 50 units Rs. 0.50/unit
//For next 100 units Rs. 0.75/unit
//For next 100 units Rs. 1.20/unit
//For unit above 250 Rs. 1.50/unit
//An additional surcharge of 20% is added to the bill.
#include<stdio.h>
 int main()
{
	float units,a,price,percentage;
	printf("Enter the Units=");
	scanf("%f",&units);
	
	if(units>=1&&units<=50)
		{
			a=(units*0.50);
		}
		else if(units>50&&units<=150)
		{
		    a=25+(units-50)*0.75;	
		}
		else if(units>150&&units<=250)
		{
			a=100+(units-150)*1.20;		
		}
		else
		{
			a=220+(units-250)*1.50;
		}
		percentage=(a*20)/100;
		price=percentage+a;
		printf("Total Electricity bill=%f",price);
		return 0;
}
