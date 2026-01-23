#include <stdio.h>

int main() {
    int n = 10;

    for(int i = 1; i <= n; i++) {

        // Print star at odd positions
        if(i % 2 != 0) {
            printf("*");
        }
        // Print space at even positions
        else {
            printf(" ");
        }
    }

    return 0;
}
