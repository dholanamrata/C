#include<stdio.h>
int main()
{
	int arr[]={10,15,150,23,9};
	int i,small,large;
	small=arr[0];
	large=arr[0];
	for(i=1; i<5; i++)
	{
		if(arr[i]<small)
		{
			small=arr[i];
		}
		if(arr[i]>large)
		{
			large=arr[i];
		}
	}
	printf("Large number: %d \n",large);
	printf("Small number: %d \n",small);
}
