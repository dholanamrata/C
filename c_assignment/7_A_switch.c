#include <stdio.h>
int main()
{
    int i, number, odd = 0, even = 0;
    printf("Enter any number: ");
    scanf("%d", &number);
    for(i=1; i<=number;i++)
    {
       if(i%2==0)
       {
        even++;
       }
       else
       {
        odd++;
       }
    }
       
    printf(" Total odd number: %d\n", odd);
    printf(" Total even number: %d", even);
}
