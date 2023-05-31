// To find the product of odd numbers between 10 and 20, we need to multiply all the odd integers between 10 and 20 together. These are 11, 13, 15, 17, and 19.
// 11 * 13 = 143
// 143 * 15 = 2145
// 2145 * 17 = 36465
// 36465 * 19 = 692835

#include <stdio.h>
int main()
{
    int product = 1;
    for (int i = 11; i <= 19; i += 2)
    {
        product = product * i;
    }
    printf("Product of odd number between 10 to 20 %d ", product);
}