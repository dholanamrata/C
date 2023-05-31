#include <stdio.h>
int main()
{
    int number;
    printf("Enter any number: ");
    scanf("%d", &number);
    if(number%2 == 0)
    {
        printf("number is odd ");
    }
    else{
        printf("number is even ");
    }
    return 0;
}