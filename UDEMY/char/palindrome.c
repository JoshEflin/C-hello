#include <stdio.h>

int length(char s[]) {
  int i = 0; 

  while(s[i] != '\0'){
    i++;
  }

  return i;
}

int isPalindrom(char s[]) {
  int i, palin = 1;
  int len = length(s);
  while ( i < len/2) {
    if (s[i] != s[len - 1 - i]) {
     palin =0;
     break;
    }
    i++;
  }
  return palin;
}
int main() {
  char s[20];
  int i, len, palin =0;

  printf("Enter some text ");
  scanf("%s", s);
  if ( isPalindrom(s) == 1){
    return printf("Yes");
  }
  return printf("no");
}
// while (s[++i] !='\0');
// ;
// then return i;
