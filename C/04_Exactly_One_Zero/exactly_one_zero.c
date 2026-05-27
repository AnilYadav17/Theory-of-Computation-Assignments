#include <stdio.h>

int main() {
    char input[100];
    int count_zero = 0;

    // Prompt the user for input
    printf("Enter a binary string: ");
    scanf("%s", input);

    // Loop through each character of the string
    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] == '0') {
            count_zero++; // Increment the counter if '0' is found
        } else if (input[i] != '1') {
            // If the character is not '0' and not '1', it's invalid
            printf("Invalid input: Only 0 and 1 are allowed.\n");
            return 0; // Exit the program
        }
    }

    // Check the final count of zeros
    if (count_zero == 1) {
        printf("Accepted: String has exactly one '0'.\n");
    } else {
        
        printf("Rejected: String does not have exactly one '0'.\n");
    }

    return 0;
}