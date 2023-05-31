#include<stdio.h>
int main()
{
    int i,j,col=5,row=5;
    for(i=1; i<=row; i++)
    {
        for(j=1; j<=col; j++)
        {
            if(i==1 || j==1 || i==row || j==col)
            {
                printf("1");
            }
            else
            {
                printf("0");
            }
        }
        printf("\n");
    }
}