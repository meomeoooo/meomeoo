#include <stdio.h>

int main() {
    int rows = 3;
    int cols = 4;
    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                printf("* ");
            } else {
                printf("  "); 
            }
        }
        printf("\n");
    }
    
    return 0;
}
