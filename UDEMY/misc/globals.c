#include <stdio.h>

int x;

void read() {

    printf("Enter x:\n");
    scanf("%d",&x);
}
void print() {
    printf("%d:\n",x);
}
int main() {
    int n=10;
    printf("This is a local variable %d:\n", n);
    read();
    print();

    return 0;
}
