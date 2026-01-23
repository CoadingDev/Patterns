#include <stdio.h>

int main() {
    int rows = 5;

    for (int i = 0; i < rows; i++) {

        // T
        for (int j = 0; j < 5; j++) {
            if (i == 0 || j == 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // U
        for (int j = 0; j < 5; j++) {
            if ((j == 0 || j == 4) && i != rows - 1 ||
                (i == rows - 1 && j > 0 && j < 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // S
        for (int j = 0; j < 5; j++) {
            if (i == 0 || i == rows / 2 || i == rows - 1 ||
                (i < rows / 2 && j == 0) ||
                (i > rows / 2 && j == 4))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // H
        for (int j = 0; j < 5; j++) {
            if (j == 0 || j == 4 || i == rows / 2)
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // A
        for (int j = 0; j < 5; j++) {
            if ((i == 0 && j > 0 && j < 4) ||
                i == rows / 2 ||
                (j == 0 && i > 0) ||
                (j == 4 && i > 0))
                printf("*");
            else
                printf(" ");
        }
        printf("  ");

        // R
        for (int j = 0; j < 5; j++) {
            if (j == 0 ||
                (i == 0 && j < 4) ||
                (i == rows / 2 && j < 4) ||
                (j == 4 && i > 0 && i < rows / 2) ||
                (i - j == rows / 2))
                printf("*");
            else
                printf(" ");
        }

        printf("\n");
    }

    return 0;
}