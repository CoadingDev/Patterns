
#include <stdio.h>

int main() {
    int n = 6;
   // Loop through each row
    for(int i = 1; i <= n; i++) {

        // Check if row number is odd
        if(i % 2 != 0) {
            // Print stars in odd rows
            for(int j = 1; j <= 5; j++) {
                printf("*");
            }
        }

        // Move to next line after each row
        printf("\n");
    }

    return 0;
}


}
