#include <stdio.h>

char toggleCase(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        return c + ('a' - 'A');
    }
    else if (c >= 'a' && c <= 'z')
    {
        return c - ('a' - 'A');
    }
    else
    {
        return c;
    }
}

void convertToggleCase(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toggleCase(str[i]);
    }
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    gets(input);
    convertToggleCase(input);

    printf("Toggle case: %s\n", input);

    return 0;
}
