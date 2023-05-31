#include <stdio.h>
int main()
{
//    int a[4]={21,11,13,12};
	int a[7]={3,8,1,7,4,6,2};
    int i,oddsum = 0, evensum = 0;
    for (i=0; i<=6; i++)
    {
        if (a[i]%2==0)
        {
            evensum=evensum+a[i];
        }
        else
        {
           oddsum=oddsum+a[i];
        }
    }
    printf("Odd sum: %d\n", oddsum);
    printf("Even sum: %d ", evensum);
}
//odd-3,1,7
//evensum=0+8
//8+4
//12+6
//18+2



