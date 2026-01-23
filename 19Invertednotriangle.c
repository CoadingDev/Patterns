#include <stdio.h>

int main() {
    int n;

    // Read number of rows
    scanf("%d", &n);

    // Outer loop controls rows (decreasing)
    for(int i = n; i >= 1; i--) {

        // Inner loop prints numbers
        for(int j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        // Move to next line
        printf("\n");
    }

    return 0;
}
