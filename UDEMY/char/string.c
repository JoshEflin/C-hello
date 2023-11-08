#include <stdio.h>
#include <ctype.h>
int main() {
  char name[20];
  int i, count;
  printf("enter your name ");
  scanf("%s", name);

  printf("\n Hello ! %s \n" , name);
  i = count = 0;
  /* equivalent to
   * i =0
   * count = 0 
   */

  while(name[i] != '\0') {

   /* if (name[i] == 'a' || name[i] == 'A')etc...
    *i++;
    *
    * switch(toupper(name[i])) {
    *   case 'A':
    *   ...etc
    *   case 'U' : count ++;
    *              break;
    *}
    */

    switch(toupper(name[i])) {
      case 'A':
      case 'E':
      case 'I':
      case 'O':
      case 'Y':
      case 'U': count ++;
                 break;
    }
     i++;
   
    
  }
  printf("\nThe Number of Vowels:\n%d vowels\n",count);
  return 0;
}
