#include <stdio.h>

/*int prime(int x) {
  int count = 2;

  if (x <= 1) {
    return 0;// 0 and 1 are not prime numbers
  }
  while (count <x) {
    if (x % count == 0) {
      return 0; // if x is divisible by any number other than itself.
    }
    count ++;
  } 

    return 1; // if the while loop complets without finday divisors x is primary
}
*/
int prime(int x) {
  int count = 0, i;
  i =1 ;
  while (i <=x) {
    if (x % i == 0) {
      count ++;
    }
    i++;
  } 
  if (count ==2) {
    return 1;
  } else {
    return 0;
    }
}
int main() {
  int n, result;

  printf("enter n");
  scanf("%d", &n);

  result = prime(n);
 if(result == 1) 
   printf("The result: %d is prime\n", n);
 else
   printf("The result: %d is not prime\n",n);

  return 0;
}
