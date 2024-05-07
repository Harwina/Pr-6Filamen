#include <stdio.h>

int main() {
    char str[100];
    int i,frequency[256] = {0};

    printf("Enter any string: ");
    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        frequency[str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for (int i = 0; i < 256; i++) {
        if (frequency[i] != 0) {
            printf("%c => %d\n", (char)i, frequency[i]);
        }
    }

    return 0;
}
