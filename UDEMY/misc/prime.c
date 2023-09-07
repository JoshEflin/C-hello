#include <stdio.h>

int main() {
 int n, i, count;
    printf("enter n ");
    scanf("%d", &n);

    count = 0;
    i = 1;
     while ( i<=n) {
         if (n%i==0){
             count++;
         }
         i++;
     }
     if (count==2) {
         printf("%d is prime\n", n );
        }else {
            printf("%d is not prime\n", n);
        }

     return 0;

}
