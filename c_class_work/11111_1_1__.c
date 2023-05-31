#include <stdio.h>
int main()
{
    int i, j, col = 5, row = 5;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= col; j++)
        {
            if (i >= 2 && i <= 4)
            {
                if (j == 2)
                {
                    printf("  ");
                }
                else if (j == 1 || j == 3)
                {
                    printf("1 ");
                }

                if (j == 3)
                {
                    break;
                }
            }
            else
            {
                printf("1 ");
            }
        }
        printf("\n");
    }  
}