#include <stdio.h>

int main() {
    int row, col;
    row = 1;

    while ( row<=5) {
    col = 1;
    
        while(col <= row) {
            printf("%d", col);
            col = col+1;
        }
            printf("\n");
        row ++;
    }
    return 0;
}
