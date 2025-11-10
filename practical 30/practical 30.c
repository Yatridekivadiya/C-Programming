#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    float *prices, temp;
    int i, j;

    printf("Enter number of items: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        printf("Error: No items to sort.\n");
        return 0;
    }

    prices = (float *)malloc(n * sizeof(float));
    if (prices == NULL) {
        printf("Memory allocation failed.\n");
        return 0;
    }

    printf("Enter prices: ");
    for (i = 0; i < n; i++) {
        if (scanf("%f", (prices + i)) != 1) {
            printf("Error: Invalid input for price. Please enter numeric values only.\n");
            free(prices);
            return 0;
        }
    }

    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (*(prices + i) > *(prices + j)) {
                temp = *(prices + i);
                *(prices + i) = *(prices + j);
                *(prices + j) = temp;
            }
        }
    }

    printf("Sorted Prices: ");
    for (i = 0; i < n; i++) {
        printf("%.2f", *(prices + i));
        if (i != n - 1)
            printf(", ");
    }
    printf("\n");

    free(prices);
    printf("\nThis program is developed by yatri dekivadiya");
    return 0;
}
