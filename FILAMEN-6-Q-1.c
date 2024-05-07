#include <stdio.h>

int main() {
    char str[100];

    printf("Enter any string: ");
    scanf("%s", str);

    int length = 0;
    int i;

    for (length = 0; str[length] != '\0'; length++);

    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            printf("Given string is not a Palindrome.\n");
        }
    }

    printf("Given string is a Palindrome.\n");

    return 0;
}
