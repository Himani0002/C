#include <stdio.h>
#include <string.h>
#include <ctype.h>

void toCamelCase(char *str)
{
    int length = strlen(str);
    int i, j = 0;

    str[0] = tolower(str[0]);

    for (i = 1; i < length; i++)
    {
        if (str[i] != ' ')
        {
            if (str[i - 1] == ' ')
            {
                str[j] = toupper(str[i]);
            }
            else
            {
                str[j] = str[i];
            }
            j++;
        }
    }

    str[j] = '\0';
}

int main()
{
    char input[100];

    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';

    toCamelCase(input);

    printf("CamelCase string: %s\n", input);

    return 0;
}
