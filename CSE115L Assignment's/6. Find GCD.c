#include <stdio.h>

int GCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    if (num1 < 0) {
        num1 = -num1;
    }
    if (num2 < 0) {
        num2 = -num2;
    }

    int gcd = GCD(num1, num2);

    printf("The GCD of %d and %d is %d\n", num1, num2, gcd);

    return 0;
}
