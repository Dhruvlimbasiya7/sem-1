#include <stdio.h>

// Define a structure for a book
struct Book {
    char title[100];
    char author[100];
    float Date;
    float price;
};

int main() {
    struct Book books[3]; // Array to hold 3 books
    int i;

    // Read data for 3 books
    for (i = 0; i < 3; i++) {
        printf("Enter details for book %d:\n", i + 1);
        
        printf("Title: ");
        scanf(" %[^\n]", books[i].title); // Read string with spaces

        // fgets(books[i].title,sizeof(books[i].title),stdin);

        printf("Author: ");
        scanf(" %[^\n]", books[i].author);
        
        printf("Date: ");
        scanf(" %f", books[i].Date);
        
        printf("Price: ");
        scanf("%f", &books[i].price);
        
        printf("\n");
    }

    // Display the data for the 3 books
    printf("Book Details:\n");
    for (i = 0; i < 3; i++) 
    {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Date: %f\n", books[i].Date);
        printf("Price: $%.2f\n", books[i].price);
        printf("\n");
    }

    
}