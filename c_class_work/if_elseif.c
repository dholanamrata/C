#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age<18)
    {
        printf("you are not able for licence");
    }
    else if(age>18 && age<60){
        printf("you are able for driving");
    }
    else 
        {
        printf("sorry you are not able for driving");
    }
}