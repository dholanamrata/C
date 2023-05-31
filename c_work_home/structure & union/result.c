#include<stdio.h>
struct student
{
	int rollno,GRID,english,gujarati,hindi,total;
	char name[1000];
	float percentage;
};
int main()
{
	struct student s[1000];
	int i,n;
	printf("Enter the number of Students = ");
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("Students no. %d\n",i+1);
		printf("Enter Student Name = ");
		scanf("%s",&s[i].name);
		printf("Enter GR-ID = ");
		scanf("%d",&s[i].GRID);
		printf("Enter Roll No = ");
		scanf("%d",&s[i].rollno);
		printf("English marks = ");
		scanf("%d",&s[i].english);
		printf("Gujarati marks = ");
		scanf("%d",&s[i].gujarati);
		printf("Hindi marks = ");
		scanf("%d",&s[i].hindi);
		s[i].total=s[i].english+s[i].gujarati+s[i].hindi;
		s[i].percentage=s[i].total/3;
		printf("Percentage = %f\n",s[i].percentage);
		
		if(s[i].english<35 || s[i].gujarati<35 || s[i].hindi<35)
		{
			if(s[i].percentage>=90)
			{
				printf("Grade A+..\n");
				printf("Fail!!!!");
			}
			else if(s[i].percentage>=80)
			{
				printf("Grade A..\n");
				printf("Fail!!!!");
			}
			else if(s[i].percentage>=70)
			{
				printf("Grade B..\n");
				printf("Fail!!!!");
			}
			else if(s[i].percentage>=60)
			{
				printf("Grade C..\n");
				printf("Fail!!!!");
			}
			else if(s[i].percentage>=50)
			{
				printf("Grade D..\n");
				printf("Fail!!!!");
			}
			else if(s[i].percentage>=40)
			{
				printf("Grade E..\n");
				printf("Fail!!!!");
			}
			else 
			{
				printf("Fail!!!!\n");
			}
		}
	   else if(s[i].percentage>=90)
		{
			printf("Grade A+..\n");
			printf("Pass!!!!");
		}
		else if(s[i].percentage>=80)
		{
			printf("Grade A..\n");
			printf("Pass!!!!");
		}
		else if(s[i].percentage>=70)
		{
			printf("Grade B..\n");
			printf("Pass!!!!");
		}
		else if(s[i].percentage>=60)
		{
			printf("Grade C..\n");
			printf("Pass!!!!");
		}
		else if(s[i].percentage>=50)
		{
			printf("Grade D..\n");
			printf("Pass!!!!");
		}
		else if(s[i].percentage>=40)
		{
			printf("Grade E..\n");
			printf("Pass!!!!");
		}
		else 
		{
			printf("Fail!!!!\n");
		}
		printf("\n\n");
	}
}
