#include <stdio.h>

int main() {
    int a = 1, b = 5;
    for ( a++ ; a < 5 ; b += 5) {
        a++;
        printf("%d \nis the value of a\n",a);
        printf("%d \nis the value of b\n", b);
    }
    printf("%d", b);
    return 0;
}
