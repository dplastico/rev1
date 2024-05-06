#include <stdio.h>

int main() {
    char str[] = "hello This is a test";
    int i = 0;
    char found = 0; // Flag to indicate if 'R' or 'r' is found

    // Loop through each character in the string
    while (str[i] != '\0') {
        if (str[i] == 'R' || str[i] == 'r') {
            found = 1; // Set found flag to true
            break; // Exit the loop as 'R' or 'r' is found
        }
        i++; // Move to the next character
    }

    // Check the flag and print the appropriate message
    if (found) {
        printf("Letter R found in the program.\n");
    } else {
        printf("Letter R not found in the program.\n");
    }

    return 0;
}
