#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input_str[100];
    int vowel_count = 0;
    int consonant_count = 0;

    printf("Enter a string: ");
    fgets(input_str, sizeof(input_str), stdin);

    // Convert the string to lowercase for easier vowel checking
    for (int i = 0; i < strlen(input_str); i++) {
        input_str[i] = tolower(input_str[i]);
    }

    for (int i = 0; i < strlen(input_str); i++) {
        char current_char = input_str[i];

        // Check if the current character is an alphabet character
        if (isalpha(current_char)) {
            // Check if it is a vowel
            if (current_char == 'a' || current_char == 'e' || current_char == 'i' ||
                current_char == 'o' || current_char == 'u') {
                vowel_count++;
            } else {
                consonant_count++;
            }
        }
    }

    printf("Number of vowels: %d\n", vowel_count);
    printf("Number of consonants: %d\n", consonant_count);

    return 0;
}
