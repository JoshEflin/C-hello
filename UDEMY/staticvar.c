#include <stdio.h>

void print(){
    static int a = 0;
    a++;
    printf("value of a is %d\n",a);
}

int main() {

    print();
    print();
    print();
    return 0;

}
