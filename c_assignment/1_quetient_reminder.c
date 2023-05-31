#include<stdio.h>
int main()
{
    int divident,quetient,remainder,divisor;
    printf("Eneter Divident: ");
    scanf("%d",&divident);
    printf("Eneter Divisor: ");
    scanf("%d",&divisor);

    quetient = divident /divisor;
    remainder = divident % divisor;

    printf("Quetient = %d\n", quetient);
    printf("Remainder = %d\n", remainder);



}
