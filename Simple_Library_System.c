#include <stdio.h>
#include <string.h>

struct Book {
    char title[50];
    char author[50];
    int pages;
};

int main() {
    struct Book books[100];
    int n, i;

    printf("Enter number of books: ");
    scanf("%d", &n);
    getchar(); // to consume newline after scanf

    for(i = 0; i < n; i++) {
        printf("\nEnter details of book %d:\n", i+1);
        printf("Title: ");
        fgets(books[i].title, sizeof(books[i].title), stdin);
        books[i].title[strcspn(books[i].title, "\n")] = 0; // remove newline

        printf("Author: ");
        fgets(books[i].author, sizeof(books[i].author), stdin);
        books[i].author[strcspn(books[i].author, "\n")] = 0;

        printf("Pages: ");
        scanf("%d", &books[i].pages);
        getchar(); // consume newline
    }

    printf("\n===== Library Books =====\n");
    for(i = 0; i < n; i++) {
        printf("\nBook %d:\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Pages: %d\n", books[i].pages);
    }

    return 0;
}
