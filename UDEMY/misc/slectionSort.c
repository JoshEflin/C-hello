#include <stdio.h>
#include<stdlib.h>

// rather than using 0's and 1's as explicit return values, this could make the 
// code more readable.

void read(int *b, int n) {
    int i;
        printf("Enter %d values ", n );
    for( i = 0; i < n; i++) {
        scanf("%d", &b[i]);
    }
}
void sort( int a[], int n) {
    int i, j , temp;
    for (i = 0; i< n-1; i++) {
        for (j = i+1; j< n; j ++) {
            if (a[i]> a[j]) {
                temp = a[i];
                a[i] = a[j];
                    a[j] = temp;
            }
        }
    }
}
void print( int *b, int n) {
    int i; printf("Value of the array are \n");
    for(i =0; i< n ; i++) {
        printf( " %d ", b[i]);
        }
}
const int FAILED = 1;
const int SUCCESS = 0;
int main() {

    int *a;
    int n;

    printf("Enter n ");
    scanf("%d",&n);

    a = (int *)malloc(n * sizeof(int));
// if malloc fails a will be NULL
    if(a == NULL) {
        printf("Unable to allocate memory\n");
        exit(FAILED);
    }
read(a,n);
sort(a, n);

    return SUCCESS;

}

