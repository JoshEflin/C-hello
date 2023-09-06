#include <stdio.h>
void change(int *p) {
    // assign the value at the address in p to +=5
    *p = *p + 5;
}

int main () {
    int a =10;
    change(&a);// & operator refers to the address of the variable the follows
    printf("a is %d \n",a);
    return 0;
}

