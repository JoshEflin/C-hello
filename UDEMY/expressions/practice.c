#include <stdio.h>

int main() {
    double quantity, rate, amount;

    printf("Enter rate per unit ");
    scanf("%lf", &rate);

    printf("Enter quantity " );
    scanf("%lf", &quantity);

    amount = quantity * rate;
    if ( amount > 500){
        amount = amount * 0.9;
    }
    printf("calculated net amount %lf\n", amount);
    return 0 ;
}
