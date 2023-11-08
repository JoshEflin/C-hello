#include <stdio.h>

int big (int x, int y){
  if (x > y) 
    return x;
  else
    return y;
}

int small(int a, int b) {
  if(a < b) {
    return a;
  }else {
    return b;
  }
}

int main() {
  int z = big(10,29);
  int c = small(10,20);
  int d = small(big(40,50),small(30,40));
  printf("result is %d \n%d\n%d ", z, c, d);
  return 0;
}
