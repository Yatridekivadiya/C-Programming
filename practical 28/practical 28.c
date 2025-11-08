#include <stdio.h>

union Book {
    char title[50];
    char author[50];
    float price;
    int status;
};

int main() {
    union Book b;
    int choice;

    printf("----- Library Management (Using Union) -----\n");
    printf("1. Enter Title\n");
    printf("2. Enter Author\n");
    printf("3. Enter Price\n");
    printf("4. Enter Status (1 = Issued, 0 = Available)\n");
    printf("5. Display Book Details\n");
    printf("6. Exit\n");

    while (1) {
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        getchar();

        switch (choice) {
            case 1:
                printf("Enter Book Title: ");
                gets(b.title);
                break;

            case 2:
                printf("Enter Author Name: ");
                gets(b.author);
                break;

            case 3:
                printf("Enter Book Price: ");
                scanf("%f", &b.price);
                break;

            case 4:
                printf("Enter Book Status (1 = Issued, 0 = Available): ");
                scanf("%d", &b.status);
                if (b.status == 1)
                    printf("Book marked as Issued.\n");
                else
                    printf("Book marked as Available.\n");
                break;

            case 5:
                printf("Raw memory currently holds: \n");
                printf("As text: %s\n", b.title);
                printf("As number: %.2f\n", b.price);
                printf("As status flag: %d\n", b.status);
                break;

            case 6:
                printf("Exiting...\n");
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
    printf("This program is developed by yatri dekivadiya");
    return 0;
}
