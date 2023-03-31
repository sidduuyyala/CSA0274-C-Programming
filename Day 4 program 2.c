#include <stdio.h>

struct book {
    char title[100];
    char author[100];
    float price;
};

int main() {
    struct book books[5];
    int i;

    for (i = 0; i < 5; i++) {
        printf("Enter the title of book %d: ", i+1);
        scanf("%s", books[i].title);

        printf("Enter the author of book %d: ", i+1);
        scanf("%s", books[i].author);

        printf("Enter the price of book %d: ", i+1);
        scanf("%f", &books[i].price);
    }

    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("Book %d\n", i+1);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Price: %.2f\n\n", books[i].price);
    }

    return 0;
}
