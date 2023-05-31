#include <stdio.h>
int main()
{
    int num1, num2, res;
    char operator;
    printf("Eneter any operation: +,-,*,/ \n");
    scanf("%c", &operator);
    printf("Enter any two number: ");
    scanf("%d %d", &num1, &num2) ;

    switch (operator)
    {
    case '+':
        res = num1 + num2;
        printf("The Sum is %d", res);
        break;
    case '-':
        res = num1 - num2;
        printf("The Subtraction is %d", res);
        break;
    case '*':
        res = num1 * num2;
        printf("The Multiplication is %d", res);
        break;
    case '/':
        res = num1 / num2;
        printf("The Division is %d", res);
        break;
    default:
        printf("Invalid input.");
        break;
    }
}