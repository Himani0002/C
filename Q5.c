#include <stdio.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    scanf("%[^\n]", input);

    for (int i = 0; input[i] != '\0'; i++) {
        if (input[i] >= 'a' && input[i] <= 'z') {
            input[i] = input[i] - ('a' - 'A');
        }
    }

    printf("Uppercase string: %s\n", input);

    return 0;
}
