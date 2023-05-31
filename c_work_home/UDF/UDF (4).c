#include<stdio.h>
int cube()
{
    int a;
    printf("Enter value of A = ");
    scanf("%d",&a);
    return a*a*a;
}
int main()
{
    int a;
    a=cube();
    printf("%d",a);   
}