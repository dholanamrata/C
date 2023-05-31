#include<stdio.h>
struct distance
{
	int feet,inch;
};
int main()
{
	struct distance d1,d2;
	int i,j;
	
	printf("Distance 1...\n");
	printf("Enter Feet = ");
	scanf("%d",&d1.feet);
	printf("Enter Inch = ");
	scanf("%d",&d1.inch);
	printf("Distance 2...\n");
	printf("Enter Feet = ");
	scanf("%d",&d2.feet);
	printf("Enter Inch = ");
	scanf("%d",&d2.inch);
	
	i=d1.feet+d2.feet;
	j=d1.inch+d2.inch;
	
	while(j>=12)
	{
		i=i+1;
		j=j-12;
	}
	printf("%d Feet %d Inch",i,j);
}
