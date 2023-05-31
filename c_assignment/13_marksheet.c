#include<stdio.h>
struct student{
	char name[50];
	int rollno,i;
	float mark;
};
int main()
{
	struct student s[5];
    {
    	int i;
        for (i=0; i<2; i++)
        {           	
		    scanf("%s %d %f",&s[i].name,&s[i].rollno,&s[i].mark);
        }
        for (i=0; i<2; i++)
        {
            printf("\n");
            printf(" %d<--------Student Details-------->\n",i);
            printf("StudentName: %s\n",s[i].name);
            printf("RollNumber: %d\n",s[i].rollno);
            printf("Mark: %.2f\n",s[i].mark);

        }
	}
}
