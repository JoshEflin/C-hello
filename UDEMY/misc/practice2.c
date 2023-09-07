#include <stdio.h>

int main() {
    int n;
    int sum =0;
    printf("Enter n");
    scanf("%d", &n);

    while(n>0) {
      sum = sum +(n %10);
      n = n/10;
    }
    printf("Sum of digits is %d\n", sum);
    return 0;
}
