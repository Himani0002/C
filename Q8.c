#include <stdio.h>
#include <ctype.h>

void convertToTitleCase(char *str)
{
    int capitalizeNext = 1;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (isspace(str[i]))
        {
            capitalizeNext = 1;
        }
        else
        {
            if (capitalizeNext)
            {
                str[i] = toupper(str[i]);
                capitalizeNext = 0;
            }
            else
            {
                str[i] = tolower(str[i]);
            }
        }
    }
}

int main()
{
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    if (input[strlen(input) - 1] == '\n')
    {
        input[strlen(input) - 1] = '\0';
    }

    convertToTitleCase(input);

    printf("Title Case: %s\n", input);

    return 0;
}
