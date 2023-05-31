#include<stdio.h>
void sum(int a,int b)
{
    int c;
    c=a+b;
    printf("sum is = %d",c);
}
int main()
{
    int a,b;
    printf("Enter value of A = ");
    scanf("%d",&a);
    printf("Enter value of B = ");
    scanf("%d",&b);

    sum(a,b);
}