#include <stdio.h>


void swap (int *x, int*y ) {
    int temp = *x;
    *x = *y;
    *y = temp;
}
int main () {
int a= 10, b =20;
printf( "a is  %d\n and b is %d", a,b);
swap(&a,&b);
printf( "swapped a is  %d\n and swapped b is %d", a,b);
    return 0;
}

