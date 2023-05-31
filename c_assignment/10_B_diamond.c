#include <stdio.h>
int main()
{
    // int k,

    int size;
    scanf("%d", &size);
    int space = size-1 ;
    // int j = 1;
    int m = 0;
     int y = 1;
    for (int i = 1; i <= size; i++)
    {
        
           
        for (int k = 1; k <= space; k++)
        {
            printf("  ");
        }          

        for (int j = 1; j <= y+m; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        space--;
        m += 2;
    }
    // int gap = 1;
    // int lap = size;
    // // int round = 2;
    // for (int i = 1; i <=size-1; i++)
    // {

    //     for (int k = 1; k <= gap; k++)
    //     {
    //         printf(" ");
    //     }

    //     for (int j = 1 ;j <= y ; j++)
    //     {
    //         printf("%d ",j);

    //     }
    //     printf("\n");

    //     gap++;
    //     lap--;

    // }
}