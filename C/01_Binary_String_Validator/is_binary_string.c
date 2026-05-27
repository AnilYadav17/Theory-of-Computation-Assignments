#include <stdio.h>
#include <string.h>

int main() {
    char binary[100];
    int i = 0, valid = 1;

    printf("Enter the Binary String: ");
    scanf("%s", binary);

    while (binary[i] != '\0') {
        if (binary[i] != '0' && binary[i] != '1') {
            valid = 0;   // mark as invalid
            break;       // stop checking further
        }
        i++;
    }

    if (valid)
        printf("String is Accepted.\n");
    else
        printf("String is Not Accepted.\n");

    return 0;
}
