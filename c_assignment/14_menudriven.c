#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct book
{
    int access_number;
    char title[50];
    char author[50];
    char book[10][20];
    float price;
    int index;
};

struct book library[MAX_BOOKS];
int num_books = 0;

void display_menu()
{
    printf("MENU\n");
    printf("1. Add book\n");
    printf("2. Display books\n");
    printf("3. List all books of a given author\n");
    printf("4.List of the book in order of access number \n");
    printf("5. Exit\n");
}

void add_book()
{
    if (num_books >= MAX_BOOKS)
    {
        printf("Error: Library is full.\n");
        return;
    }
    struct book Newbook;
    Newbook.index = 0;
    printf("Enter book number: ");
    scanf("%d", &Newbook.access_number);
    printf("Enter book title: ");
    scanf("%s", &Newbook.title);
    printf("Enter book author: ");
    scanf("%s", &Newbook.author);
    printf("Enter book price: ");
    scanf("%f", &Newbook.price);
    for (int i = 0; i < num_books; i++)
    {
        if (strcmp(library[i].author, Newbook.author) == 0)
        {

            strcpy(library[i].book[library[i].index + 1], Newbook.title);
            printf("author is exist so one more book added to the author");
            return;
        }
    }
    strcpy(Newbook.book[Newbook.index], Newbook.title);

    library[num_books] = Newbook;
    num_books++;
    printf("Book added to library.\n");
}
void diplay_book()
{
    int i;
    if (num_books == 0)
    {
        printf("No books in library\n");
        return;
    }
    for (i = 0; i < num_books; i++)
    {
            printf("\n");
            printf(" %d<--------Book Details-------->\n",i);
            printf("AccessNo: %d\n",library[i].access_number);
            printf("Booktitle: %s\n",library[i].title);
            printf("Author: %s\n",library[i].author);
            printf("BookPrice: %f\n",library[i].price);
    }
}
void printBooksByAuthor() 
{
    
}
int main()
{
    // for(int i=0; i<2; i++)
    // {
    //     add_book();
    // }
    // for (int i = 0; i < 2; i++)
    // {

    //     printf("%s ",library[1].book[i]);

    // }
    struct book library[100];
    int choice;
    do
    {
        display_menu();
        printf("Enter your choice:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            add_book();
            break;
        case 2:
            diplay_book();
            break;
        case 3:
            printBooksByAuthor();
            break;
        
        default:
            printf("Invalid choice");
            break;
        }
    }while (choice!=2);
    return 0;
    
}