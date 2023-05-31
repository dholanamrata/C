#include <stdio.h>
int main()
{
    
    char alphabet;
    printf("Eneter any alphabet:\n");
    scanf("%c", &alphabet);  

    switch (alphabet)
    {
    case 'a':
        printf("Vowel");
        break;
    case 'e':
        printf("Vowel");
        break;
    case 'i':
        printf("Vowel");
        break;
    case 'o':
        printf("Vowel");
        break;
    case 'u':
        printf("Vowel");
        break;    
    default:
        printf("Consonant");
        break;
    }
}
