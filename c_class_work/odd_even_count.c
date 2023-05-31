#include <stdio.h>
int main()
{
    int i;
    // for(i=1; i<=100; i++)
    // {
    //     printf("%d \n", i);
    // }
    // for(i=100; i>=-10; i--)
    // {
    //     printf("%d \n", i);
    // }

    int number, odd = 0, even = 0;
    printf("Enter any number: ");
    scanf("%d", &number);
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            odd++;
        }
        else
        {
            even++;
        }
    }
    printf("%d Total odd number:", odd);
    printf("%d Total even number:", even);
}