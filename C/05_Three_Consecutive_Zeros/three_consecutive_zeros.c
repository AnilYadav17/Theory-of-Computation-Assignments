#include <stdio.h>
#include <string.h>

// Function to check if a string is accepted by the DFA
int isAccepted(char input[]) {
    int state = 0;  // Start at q0
    int i;

    for (i = 0; i < strlen(input); i++) {
        char c = input[i];

        if (c != '0' && c != '1') {
            printf("⚠️ Invalid character '%c' (only 0 and 1 are allowed)\n", c);
            return 0;
        }

        switch (state) {
            case 0:
                if (c == '0')
                    state = 1;
                else
                    state = 0;
                break;

            case 1:
                if (c == '0')
                    state = 2;
                else
                    state = 0;
                break;

            case 2:
                if (c == '0')
                    state = 3; // Accepting state
                else
                    state = 0;
                break;

            case 3:
                state = 3; // Stay in accepting state
                break;
        }
    }

    // Return 1 if in accepting state (q3), otherwise 0
    return (state == 3);
}

int main() {
    int n, i;
    char input[100];

    printf("How many strings do you want to check? ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("\nEnter string %d: ", i);
        scanf("%s", input);

        if (isAccepted(input))
            printf("✅ String \"%s\" is ACCEPTED (contains three consecutive 0s)\n", input);
        else
            printf("❌ String \"%s\" is REJECTED (does not contain three consecutive 0s)\n", input);
    }

    return 0;
}
