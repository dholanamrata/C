//C program to input any character and check whether it is alphabet, digit or special character. 
#include<stdio.h>
int main()
{
	char a;
	 printf("Enter the Character= ");
	 scanf("%c",&a);
	 
	 if(a>='a'&& a<='z' || a>='A' && a<='Z')
	 {
	 	printf("Alphabet");
	 }
	 else if(a>='0' && a<='9')
	 {
	 	printf("Digit");
	 }
	 else
	 {
	 	printf("Special Character");
	 }
	 return 0;
}
