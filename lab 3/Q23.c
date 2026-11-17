#include <stdio.h>

struct Book
{
    char name[50];
    char author[50];
    float price;
};

void readBook(struct Book *b)
{
    printf("Enter book name: ");
    scanf(" %49[^\n]", b->name);

    printf("Enter author name: ");
    scanf(" %49[^\n]", b->author);

    printf("Enter price: ");
    scanf("%f", &b->price);
}

void displayBook(struct Book b)
{
    printf("\nBook Information\n");
    printf("Book Name = %s\n", b.name);
    printf("Author = %s\n", b.author);
    printf("Price = %.2f\n", b.price);
}

int main()
{
    struct Book b;

    readBook(&b);
    displayBook(b);

    return 0;
}