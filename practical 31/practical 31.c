#include <stdio.h>
#include <stdlib.h>

int main() {
    char *summary;
    int size;

    printf("Enter initial size of summary: ");
    scanf("%d", &size);
    getchar();

    summary = (char *)calloc(size, sizeof(char));
    if (summary == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Enter the short summary: ");
    fgets(summary, size, stdin);


    char choice;
    printf("Do you want to modify and expand the summary? (y/n): ");
    scanf(" %c", &choice);
    getchar();

    if (choice == 'y' || choice == 'Y') {
        int new_size;
        printf("Enter new size for expanded summary: ");
        scanf("%d", &new_size);
        getchar();


        char *temp = realloc(summary, new_size * sizeof(char));
        if (temp == NULL) {
            printf("Reallocation failed!\n");
            free(summary);
            return 1;
        }
        summary = temp;

        printf("Enter the updated (larger) summary: ");
        fgets(summary, new_size, stdin);
    }


    printf("\nUpdated Summary:\n%s\n", summary);


    free(summary);
    printf("This program is developed by yatri dekivadiya");
    return 0;
}
