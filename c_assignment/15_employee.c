#include<stdio.h>
#include<string.h>
struct employee
{
   char name[50],department[30],experience[30];
   int age,rank,salary; 
};
int main()
{
    struct employee e1;
        printf("Enter employee details:\n");
        printf("Name:");
        fgets(e1.name,20,stdin);
        printf("Department:");
        fgets(e1.department,20,stdin);
        printf("Experience:");
        fgets(e1.experience,20,stdin);
        printf("Age:");
        scanf("%d",&e1.age);
        printf("Rank:");
        scanf("%d",&e1.rank);
        printf("Salary:");
        scanf("%d",&e1.salary);

        printf("<---------Employee Details:--------->\n");
        printf("Name: %s",e1.name);
        printf("Department: %s",e1.department);
        printf("Experience: %s",e1.experience);
        printf("Age: %d\n",e1.age);
        printf("Rank: %d\n",e1.rank);
        printf("Salary: %d\n",e1.salary);    
}

