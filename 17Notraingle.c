#include <stdio.h>

int main() {
    int n;

    // Read number of rows
    scanf("%d", &n);

    // Outer loop controls rows
    for(int i = 1; i <= n; i++) {

        // Inner loop prints repeated row number
        for(int j = 1; j <= i; j++) {
            printf("%d ", i);
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}
