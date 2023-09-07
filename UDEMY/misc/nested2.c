#include <stdio.h>

int main() {

    int input, n, row,col;
    n=0;
    printf("what is the input?");
    scanf("%d", &input);
    for (row = 1;row <= input; row++){
        for (col=1; col<row; col++) {
            printf("%d", row);
        }
        printf("%d\n", row);
    }

    
    return 0;
}

