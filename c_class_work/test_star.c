#include <stdio.h>
int main()
{
    // int i, j, row = 4, col = 4;
    // for (i = 1; i <= row; i++)
    // {
    //     for (j = 1; j <= col; j++)
    //     {
    //         printf("*");
    //     }                        
    //     printf("\n");
    // }       
    // output:
    // ****
    // ****
    // ****
    // ****

    // for(int i=1; i<=5; i++)
    // {
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }
    // output:
    // 1
    // 22
    // 333
    // 4444
    // 55555


    // int k;
    // for(int i=1; i<=5; i++)
    // {   
    //     for(k = 5; k > i; k--)
    //     {
    //         printf(" ");
    //     }        
    //     for(int j=1; j<=i; j++)
    //     {
    //         printf("%d", i);
    //     }
    //     printf("\n");
    // }
    // output:
    //     1
    //    22
    //   333
    //  4444
    // 55555

    int k;
    for(int i=1; i<=5; i++)
    {   
        for(k = 5; k > i; k--)
        {
            printf(" ");
        }        
        for(int j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        for(int j=1; j<=i; j++)
        {
            printf("%d", i);
        }
        for(k = 5; k > i; k--)
        {
            printf(" ");
        }       
        printf("\n");
    }  
    //output:
    //     11    
    //    2222
    //   333333
    //  44444444
    // 5555555555
    

    
}
