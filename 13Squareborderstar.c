#include <stdio.h>

int main() {
    int n = 5;
   // Outer loop for rows
    for(int i = 1; i <= n; i++) {
 // Inner loop for columns
        for(int j = 1; j <= n; j++) {
            // Print star at borders
            if(i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        // Move to next line
        printf("\n");
    }
     return 0;
}
