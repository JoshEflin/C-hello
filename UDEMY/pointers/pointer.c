#include <stdio.h>

int main () {

    double a, b;// two double vars
    double *p;// pointer to double
/*
 * comments are the same as js
 */
    p = &a; // p points to a;
    *p = 10.2; // inderectly assigns 10.2 to a because p points to a;
    
    p=&b;
    *p=20.4; // now it assigns b to 20.4

    printf("a is %lf\nb is %lf\n", a, b);
    return 0;
}
