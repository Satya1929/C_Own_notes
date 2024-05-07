#include <stdio.h>
#include <string.h>

struct book {
    char book_id[10];
    char book_name[50];
    float cost;
    char author[50];
};

void print_all_books(struct book b[], int n);
void print_book_details(struct book b[], int n);
void print_max_cost_book(struct book b[], int n);

int main() {
    int n, i, ch;
    printf("Enter the number of books to add: ");
    scanf("%d", &n);
    struct book books[n];
    for(i=0; i<n; i++) {
        printf("Enter the Book_id: ");
        scanf("%s", books[i].book_id);
        printf("Enter the name of the book: ");
        scanf("%s", books[i].book_name);
        printf("Enter the Cost of the book: ");
        scanf("%f", &books[i].cost);
        printf("Enter the author of the book Name: ");
        scanf("%s", books[i].author);
    }
    printf("\nMENU\n");
    printf("1. PRINT THE LIST OF BOOK WITH ALL FIELDS\n");
    printf("2. PRINT THE AUTHOR AND PRICE OF THE BOOK BY ENTERING BOOK_id\n");
    printf("3. Print the maximum cost of the book Name\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    switch(ch) {
        case 1:
            print_all_books(books, n);
            break;
        case 2:
            print_book_details(books, n);
            break;
        case 3:
            print_max_cost_book(books, n);
            break;
        default:
            printf("Invalid Input\n");
    }
    return 0;
}

void print_all_books(struct book b[], int n) {
    int i;
    for(i=0; i<n; i++) {
        printf("%s %s %f %s\n", b[i].book_id, b[i].book_name, b[i].cost, b[i].author);
    }
}

void print_book_details(struct book b[], int n) {
    char id[10];
    printf("Enter Book-Id: ");
    scanf("%s", id);
    int i, flag=0;
    for(i=0; i<n; i++) {
        if(strcmp(b[i].book_id, id) == 0) {
            printf("%s %f\n", b[i].author, b[i].cost);
            flag = 1;
            break;
        }
    }
    if(flag == 0) {
        printf("Invalid Input\n");
    }
}

void print_max_cost_book(struct book b[], int n) {
    int i;
    float max = 0;
    char max_name[50];
    for(i=0; i<n; i++) {
        if(b[i].cost > max) {
            max = b[i].cost;
            strcpy(max_name, b[i].book_name);
        }
    }
    printf("%s\n", max_name);
}