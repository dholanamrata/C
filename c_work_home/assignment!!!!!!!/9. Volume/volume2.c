#include<stdio.h>
union marks
{
	int che,math,phy,rollno;
};
int main()
{
	union marks s1,s2,s3,s4;
	int i;
	float per[5];
	char name[100];
	
	for(i=0;i<5;i++)
	{
		printf("Student no. %d\n",i+1);
		printf("Enter Name = ");
		scanf("%s",&name);
		printf("Enter Rollno = ");
		scanf("%d",&s1.rollno);
		printf("Chemistry marks = ");
		scanf("%d",&s2.che);
		printf("Mathematics marks = ");
		scanf("%d",&s3.math);
		printf("Physics marks = ");
		scanf("%d",&s4.phy);
		
		per[i]=(s2.che+s3.math+s4.phy)/3.0;
		printf("%2f Percetage\n\n",per[i]);
	}
	printf("\n");
}
