#include <stdio.h>
#include <string.h>

#define CORRECT_EMAIL "user@example.com"
#define CORRECT_PASSWORD "password123"

int main() {
    char enteredEmail[100];
    char enteredPassword[100];

    printf("Enter your email: ");
    scanf("%s", enteredEmail);

    printf("Enter your password: ");
    scanf("%s", enteredPassword);

    if (strcmp(enteredEmail, CORRECT_EMAIL) == 0 && strcmp(enteredPassword, CORRECT_PASSWORD) == 0) {
        printf("Login successful!\n");
    } else {
        printf("Login failed. Invalid email or password.\n");
    }

    return 0;
}
