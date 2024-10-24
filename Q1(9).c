// Q.1 Write a Program to find all the negative elements from a given 1D array.

#include <stdio.h>
int main()
{
    int n;
    printf("\n_________________________________________________________\n\n");

    printf("Enter the size :- ");
    scanf("%d", &n);

    printf("\n_________________________________________________________\n\n");

    int i, j, a[n];

    for (int i = 0; i < n; i++)
    {

        printf("Enter the element :- ");
        scanf("%d", &a[i]);
    }
    printf("\n_________________________________________________________\n\n");

    printf("Negative elements from an Array:- \n");

    for (int i = 0; i < n; i++)
    {

        if (a[i] < 0)
        {
            printf("%d\n", a[i]);
        }
    }
    printf("\n_________________________________________________________\n\n");

    return 0;
}