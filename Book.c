#include <stdio.h>
#include <string.h>

#define MAX_TITLE_LENGTH 30
#define MAX_AUTHOR_LENGTH 30
#define ISBN_LENGTH 13

// Define the structure for a book
struct book {
    char title[MAX_TITLE_LENGTH];
    char author[MAX_AUTHOR_LENGTH];
    int publication_year;
    char ISBN[ISBN_LENGTH];
    float price;
};

// Function to display book details
void displayBookDetails(struct book b) {
    printf("\nBook Details:\n");
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Publication Year: %d\n", b.publication_year);
    printf("ISBN: %s\n", b.ISBN);
    printf("Price: %.2f\n", b.price);
}

int main() {
    // Declare and initialize a variable of type book
    struct book myBook = {
        "Introduction to C Programming", // Title
        "John Smith",                     // Author
        2022,                             // Publication Year
        "9780131103627",                 // ISBN
        49.99                             // Price
    };

    // Display the initialized book details
    displayBookDetails(myBook);

    return 0;
}