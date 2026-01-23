#include <stdio.h>

int main() {
    int rows;

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = rows; i >= 1; i--) {
        // Print leading spaces
        for (int space = 0; space < rows - i; space++) {
            printf("  ");
        }

        // Print stars
        for (int star = 1; star <= i; star++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}
