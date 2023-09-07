#include <stdio.h>

int main() {

    int num,sum;
    printf("enter a number!\n num: ");
    scanf("%d", &num);

    while(num>1) {
        sum+= num%10;
        num = num/10;
    }
    sum +=num;
    printf("%d",sum);
    return 0;
}
