#include<stdio.h>
int main()
{
    const float pie=3.14;
    float r,result;

    printf("enter number:");
    scanf("%f",&r);
    result= pie*r*r;
    printf("result: %.2f",result);
}