#include<stdio.h>
struct student
{
   char name[50];
   int age;
   float gpa;
};
int main()
{
    struct student std[10];
    for(int  i = 0; i < 2; i++)
    {
        printf("Enter Student name:");
        scanf("%s",&std[i].name);
         printf("Enter Student Age:");
        scanf("%d",&std[i].age);
         printf("Enter Student GPA:");
        scanf("%f",&std[i].gpa);
    }
    for (int i = 0; i < 2; i++)
    {
        printf("Student detail\n");
        printf("Name: %s\n",std[i].name);
        printf("Age: %d\n",std[i].age);
        printf("GPA: %f",std[i].gpa);
        printf("\n");
    }
    
    
}