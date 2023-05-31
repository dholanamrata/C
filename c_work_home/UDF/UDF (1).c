#include<stdio.h>
int sum(int a, int b)
{
    int c;
    c=a+b;
    return c;
}
main()
{
    int a,b,c;
    printf("Enter value of A = ");
    scanf("%d",&a);
    printf("Enter value of B = ");
    scanf("%d",&b);

    c=sum(a,b);
    printf("sum is = %d",c);

}