#include <stdio.h>

int main ()  {
    int n;
    int i;

    printf("Enter n");
    scanf("%d", &n);
    i = 1;

    while(i <=n){
        printf("%d", i);
        i +=1;
    }
    return 0;
}

int factorial(int x){
    int counter = 1;
    while(x>0) {
        counter *= x;
        x -=1;
    }
    printf("%d ", counter);
    return counter;
}
int boo = 10;
int factorial(int boo);
