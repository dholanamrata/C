#include <stdio.h>
int main()
{
    int num, product = 1;
    int number[4];

    for (int i = 0; i < 4; i++)
    {
        printf("Enter number: ");
        scanf("%d", &num);
        number[i] = num;
    }
    for (int i = 0; i < 4; i++)
    {

        if (number[i] == 0)
        {
            continue;
        }
        product = product * number[i];
    }
    printf("Product of 4 number is : %d", product);
    return 0;
}