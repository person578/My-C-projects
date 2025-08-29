#include <stdio.h>
#include <math.h>

int main() {

    double principal = 0.0;
    double rate = 0.0;
    int years = 0;
    int timesCompounded = 0;
    double total = 0.0;

    printf("Compound Interest Calculator\n");

    printf("Enter the principal ");
    scanf("%lf", &principal);

    printf("Enter the interest rate % ()");
    scanf("%lf", &rate);
    rate = rate / 100;

    printf("Enter the # of years : ");
    scanf("%d", &years);

    printf("Enter # of years compound ");
    scanf("%d", &timesCompounded);

    return 0;
}
