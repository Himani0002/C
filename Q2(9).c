// Q.2 Write a Program to find the largest element from a given 2D array.
#include <stdio.h>
int main()
{

    int n1, n2;
    printf("\n_________________________________________________________\n\n");

    printf("Enter the array's row size:- ");
    scanf("%d", &n1);

    printf("Enter the array's column size :- ");
    scanf("%d", &n2);
    printf("\n_________________________________________________________\n\n");

    int a[n1][n2], max = 0;

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {
            printf("Enter the element :- ");
            scanf("%d", &a[i][j]);

            if (a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("\n_________________________________________________________\n\n");

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < n2; j++)
        {

            printf("%d \n", a[i][j]);
        }
    }

    printf("Maximum = %d \n", max);
    printf("\n_________________________________________________________\n\n");

    return 0;
}