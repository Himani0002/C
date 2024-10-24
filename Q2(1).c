#include <stdio.h>

void addArrays(int rows, int cols, int arr1[][cols], int arr2[][cols], int result[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            result[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displayArray(int rows, int cols, int arr[][cols])
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int arr1[rows][cols], arr2[rows][cols], result[rows][cols];

    printf("Enter elements of the first array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("Enter elements of the second array:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    addArrays(rows, cols, arr1, arr2, result);

    printf("Resultant array after addition:\n");
    displayArray(rows, cols, result);

    return 0;
}
