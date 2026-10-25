// Show a function if the given character is vowel.

#include <stdio.h>

// Function to check if a character is a vowel
int isVowel(char ch) {
    // Convert to lowercase for uniform comparison
    if (ch >= 'A' && ch <= 'Z') {
        ch = ch + 32;
    }

    // Check for vowels
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
        return 1; // It's a vowel
    } else {
        return 0; // Not a vowel
    }
}

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); // Space before %c to consume any leftover newline

    if (isVowel(ch)) {
        printf("%c is a vowel.\n", ch);
    } else {
        printf("%c is not a vowel.\n", ch);
    }

    return 0;
}