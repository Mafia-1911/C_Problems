#include <stdio.h>

double power(double base, int exp) {
    double result = 1.0;

    if (exp >= 0) {
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
    } else {
        for (int i = 0; i < -exp; i++) {
            result /= base;
        }
    }

    return result;
}

int main() {
    double base;
    int exp;

    printf("Enter the base: ");
    scanf("%lf", &base);
    printf("Enter the exp: ");
    scanf("%d", &exp);

    double result = power(base, exp);

    printf("%lf^%d = %lf\n", base, exp, result);

    return 0;
}
