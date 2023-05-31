#include<stdio.h>
#include<string.h>
// When we include data menuali that time use this #include<string.h>
struct studentData{
    int year;
    char studentName[20];
    char class[5];
    int rollnumber; 
};

void StudentDetail(){
    struct studentData s[2];
    

        for (int i = 0; i < 2; i++)
        {
            scanf("%d %s %s %d",&s[i].year,&s[i].studentName,&s[i].class,&s[i].rollnumber);
        }
        for (int i = 0; i < 2; i++)
        {
            printf("\n");
            printf(" %d<--------Student Details-------->\n",i);
            printf("Year: %d\n",s[i].year);
            printf("StudentName: %s\n",s[i].studentName);
            printf("Class: %s\n",s[i].class);
            printf("RollNumber: %d\n",s[i].rollnumber);
        }
}

int main()
{
   StudentDetail();
}