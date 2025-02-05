#include <stdio.h>
#include <ctype.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (isalpha(ch)) { // Check if the character is an alphabet
        // Convert to lowercase to simplify vowel checking
        char lower = tolower(ch);
        if (lower == 'a' || lower == 'e' || lower == 'i' || lower == 'o' || lower == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else if (isdigit(ch)) { // Check if the character is a digit
        printf("%c is a digit.\n", ch);
    } else { // If it's neither an alphabet nor a digit, it's a special character
        printf("%c is a special character.\n", ch);
    }

    return 0;
}
