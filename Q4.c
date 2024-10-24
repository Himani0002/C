#include <stdio.h>

int main()
{
    int arr[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25}};

    int sum = 0;

    printf("Boundary elements:\n");

    for (int col = 0; col < 5; col++)
    {
        printf("%d ", arr[0][col]);
        sum += arr[0][col];
    }

    for (int row = 1; row < 4; row++)
    {
        printf("%d ", arr[row][4]);
        sum += arr[row][4];
    }

    for (int col = 3; col >= 0; col--)
    {
        printf("%d ", arr[4][col]);
        sum += arr[4][col];
    }

    for (int row = 3; row > 0; row--)
    {
        printf("%d ", arr[row][0]);
        sum += arr[row][0];
    }

    printf("\nSum of boundary elements: %d\n", sum);

    return 0;
}
