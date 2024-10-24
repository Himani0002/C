#include <stdio.h>

void toLowerCase(char *str)
{
    while (*str)
    {
        if (*str >= 'A' && *str <= 'Z')
        {
            *str = *str + ('a' - 'A');
        }
        str++;
    }
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    scanf("%[^\n]", input);

    toLowerCase(input);

    printf("String in lowercase: %s\n", input);

    return 0;
}
