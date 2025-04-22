#include <stdio.h>

int main() {
    char str[100];
    char target;
    int appear = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count: ");
    scanf(" %c", &target);  // Note the space before %c to consume the newline character

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == target) {
            appear++;
        }
    }

    printf("The character '%c' occurs %d times in the string.\n", target, appear);

    return 0;
}
