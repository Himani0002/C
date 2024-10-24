#include <stdio.h>

int main()
{
    FILE *evenFile = fopen("even_numbers.txt", "w");
    FILE *oddFile = fopen("odd_numbers.txt", "w");

    if (evenFile == NULL || oddFile == NULL)
    {
        printf("Error opening files for writing.\n");
        return 1;
    }

    for (int i = 50; i <= 70; i++)
    {
        if (i % 2 == 0)
        {
            fprintf(evenFile, "%d\n", i);
        }
        else
        {
            fprintf(oddFile, "%d\n", i);
        }
    }

    fclose(evenFile);
    fclose(oddFile);

    printf("Even and odd numbers have been written to separate files.\n");

    return 0;
}
