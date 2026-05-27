#include <stdio.h>
#include <string.h>

typedef enum { q0, q1, q2 } State;

/* Returns 1 if input has at most one '0', 0 otherwise.
   Prints an error and returns 0 for invalid (non-binary) input. */
int atmost_one_zero(const char *input) {
    State currentState = q0;
    int i = 0;

    while (input[i] != '\0') {
        char symbol = input[i];

        /* Validate symbol */
        if (symbol != '0' && symbol != '1') {
            printf("Invalid input! Only 0 and 1 are allowed.\n");
            return 0;
        }

        /* State transitions */
        switch (currentState) {
            case q0: /* seen no 0 so far */
                currentState = (symbol == '0') ? q1 : q0;
                break;

            case q1: /* seen exactly one 0 so far */
                currentState = (symbol == '0') ? q2 : q1;
                break;

            case q2: /* seen more than one 0 -> reject state */
                currentState = q2;
                break;
        }
        i++;
    }

    /* accept if not in reject state q2 */
    return (currentState != q2);
}

int main() {
    char input[100];

    printf("Enter a binary string: ");
    if (scanf("%99s", input) != 1) {
        printf("Input error.\n");
        return 0;
    }

    if (atmost_one_zero(input)) {
        printf("Accepted : String has at most one '0'\n");
    } else {
        printf("Rejected : String has more than one '0'\n");
    }

    return 0;
}
