#include <stdio.h>
#include<stdlib.h>

const int FAILED = 1;
const int SUCCESS = 0;
int main() {

    int *a;
    int n;

    printf("Enter n ");
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));

    if(a == NULL) {
        printf("Unable to allocate memory");
        exit(FAILED);
    }


    return 0;

}

