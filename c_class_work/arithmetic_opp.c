#include<stdio.h>
int main()
{
    int var1 = 15;
    float var2 = 20.35;
    char var3 = 30;
    double var4 = 40;
    double var5 =50.36;

    printf("hello\n");
    printf("%d\n", var1);

    float inputnumber;
    printf("Enter any valus:");
    scanf("%f", &inputnumber);
    printf("%f\n",inputnumber);

    printf("Dhola %.1f\n",72.41);
    printf("namrata %c %c %c\n", '#','$','&');
    
    var1 = 10;
    printf("%d\n",var1); 
    printf("%d\n", var1+10);
    printf("%d\n", var1-10);
    printf("%d\n", var1*10);
    printf("%d\n", var1/10);
    printf("%d\n", var1%10);

    printf("%.1f\n", var1+var2);
    printf("%.1lf\n",var4);


    return 0;
}