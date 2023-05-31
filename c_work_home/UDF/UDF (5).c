#include<stdio.h>
int sum (int a,int b);
int sub (int a,int b);
int mul (int a,int b);
int div (int a,int b);

int main()
{
    int a,b,c,ch;
    printf("press 1 for Addition\n");
    printf("press 2 for Subtraction\n");
    printf("press 3 for Multiplication\n");
    printf("press 4 for Division\n");
    printf("Enter your choice =");
    scanf("%d",&ch);
    printf("Enter value of a = ");
    scanf("%d",&a);
    printf("Enter value of b = ");
    scanf("%d",&b);

    switch(ch)
    {
        case 1:
            c=sum(a,b);
            printf("Addition is =%d",c);
            break;
        case 2:
            c=sub(a,b);
            printf("Subtraction is =%d",c);
            break;
        case 3:
            c=mul(a,b);
            printf("Multiplication is =%d",c);
            break;
        case 4:
            c=div(a,b);
            printf("Division is =%d",c);
            break;
        default:
            printf("ERROR");                    
    }
}
int sum (int a,int b)
{
    int c;
    c=a+b;
    return c;
}
int sub (int a,int b)
{
    int c;
    c=a-b;
    return c;

}
int mul (int a,int b)
{
    int c;
    c=a*b;
    return c;
}
int div (int a,int b)
{
    int c;
    c=a/b;
    return c;
}
