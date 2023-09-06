#include <stdio.h>

int fact(int x) {
    int recurs;
    if (x>1){
        return x * fact(x-1);
    }
    return 1;
}
int main() {

    int n;

    printf("Enter a number:\n");
    scanf("%d",&n);
   int answer = fact(n); 
   printf("The Factorial of %d is %d\n",n,answer);
    return 0;
}
