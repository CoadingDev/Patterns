#include <stdio.h>

int main() {               
    int n = 5;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {

            // First row
            if(i == 1)
                printf("%d ", j);

            // Last row
            else if(i == n)
                printf("%d ", n - j + 1);
            

// First column
            else if(j == 1)
                printf("%d ", i);


            // Last column
            else if(j == n)
              printf("%d ", n - i + 1);

            // Middle space
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
            


