#include<stdio.h>
#include<stdlib.h>

int main () {
    double *p;
    p = (double *) malloc(sizeof(double));
    printf("enter value: ");
    scanf("%lf",p);
    printf("entered value %lf\n",*p);
printf("%p",(void*) &p);
    free(p);
    return 0;
}