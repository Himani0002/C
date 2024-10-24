#include <stdio.h>

int main()
{
    int rows = 3; 
    int cols = 4; 

    int array[3][4] = {
        {45, 67, 23, 89},
        {12, 56, 78, 34},
        {90, 87, 65, 43}};

    double sum = 0;
    int totalElements = rows * cols;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            sum += array[i][j];
        }
    }

    double average = sum / totalElements;

    printf("The average of the elements in the array is: %.2f\n", average);

    return 0;
}
