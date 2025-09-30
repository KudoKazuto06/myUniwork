#include <stdio.h>

#define ALPHABET_SIZE 26

int main() {
    int n;
    scanf("%d", &n);
    getchar(); // Consume newline after the integer input

    int freq[ALPHABET_SIZE] = {0};  // Frequency array for 'a' to 'z'

    // Read characters one by one using getchar()
    for (int i = 0; i < n; i++) {
        char c = getchar();
        freq[c - 'a']++;
    }

    int palindrome_length = 0;
    int has_odd = 0;

    // Calculate max palindrome length
    for (int i = 0; i < ALPHABET_SIZE; i++) {
        palindrome_length += (freq[i] / 2) * 2;  // Use even pairs
        if (freq[i] % 2 != 0) {
            has_odd = 1;  // If there's at least one odd count, we can place one in the middle
        }
    }

    // Add a single odd character in the center if possible
    if (has_odd) {
        palindrome_length++;
    }

    printf("%d\n", palindrome_length);

    return 0;
}
