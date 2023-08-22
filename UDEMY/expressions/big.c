#include <stdio.h>

int main () {
    int a, b ;

    printf("Enter a");
    scanf("%d", &a);

    printf("Enter b");
    scanf("%d", &b);
    
    if (a > b )
        printf("%d is big", a);
    else
        printf("%d is less than %d",a, b);
    return 0 ;
}
