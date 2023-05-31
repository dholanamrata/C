#include<stdio.h>
int main()
{
	int i,n,ele,pos,ch,a[100];
	printf("press1 for Element to Insert \npress2 for Element to Delete \npress3 for Element to Update\n\n");
	printf("Enter your Choice = ");
	scanf("%d",&ch);
	printf("\nEnter the Number of Elements = ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);	
	}
	switch(ch)
	{
		case 1:
		printf("Enter the Element to Insert = ");
		scanf("%d",&ele);
		printf("Enter the Position = ");
		scanf("%d",&pos);
		for(i=n-1;i>=pos-1;i--)
		{
			a[i+1]=a[i];
		}
		a[pos-1]=ele;
		n++;
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		break;
		
		case 2:
		printf("\nEnter the Position to Delete Element = ");
		scanf("%d",&pos);
		for(i=pos;i<n;i++)
		{
			a[i-1]=a[i];
		}
		n--;
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		break;
		
		case 3:
		printf("\nEnter the Element to Update = ");
		scanf("%d",&ele);
		printf("Enter the Position = ");
		scanf("%d",&pos);
		a[pos-1]=ele;
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
		break;
	}	
}
