#include <stdio.h>
int main()
{
    int i, j;

    printf("\n __________________________Q1__________________________ \n\n");
    for (int i = 41; i <= 45; i++)
    {
        for (int j = 41; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    printf("\n __________________________Q2__________________________ \n\n");

    int n = 11;

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", n);
            n++;
        }
        printf("\n");
    }
    printf("\n __________________________Q3__________________________ \n\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s <= i - 1; s++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    printf("\n __________________________Q4__________________________ \n\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            if (j % 2 == 0)
            {
                printf("0");
            }
            else
            {
                printf("1");
            }
        }

        printf("\n");
    }

    printf("\n __________________________Q5__________________________ \n\n");

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        for (int s = 1; s >= i - 5; s--)
        {
            printf("  ");
        }

        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }

    printf("\n __________________________Q6__________________________ \n\n");

    for (int i = 5; i >= 1; i--)
    {
        for (int s = 1; s <= i - 1; s++)
        {
            printf(" ");
        }
        for (int j = i; j <= 5; j++)
        {
            printf("%d", j);
        }

        for (int j = 4; j >= i; j--)
        {
            printf("%d", j);
        }

        printf("\n");
    }
    printf("\n __________________________Q7__________________________ \n\n");
   
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if ((j == 1 || j == 5) || (i == 1 || i == 3))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("\n________________________________________________________\n\n");

    return 0;
}