#include <stdio.h>

int main() {
    int n;

    // Read number of rows
    scanf("%d", &n);

    int numCount = 1;

    // Outer loop controls rows
    for(int i = 1; i <= n; i++) {

        // Print leading spaces
        for(int space = 1; space <= n - i; space++) {
            printf("  ");
        }

        // Print numbers
        for(int j = 1; j <= numCount; j++) {
            printf("%d ", j);
        }

// Increase numbers count by 2 for next row
        numCount += 2;

        // Move to next line
        printf("\n");
    }

    return 0;
}




}
