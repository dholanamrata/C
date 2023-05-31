#include<stdio.h>
int main()
{
    float amount,time,rate;
    printf("Enter YourAmount,time and Rate");
    scanf("%f %f %f",&amount,&time,&rate);
    float result= (amount*time*rate)/100;
    printf("your interest amonut is this %.2f\n", result );
    return 0;
}