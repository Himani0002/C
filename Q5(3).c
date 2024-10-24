
// Q.5 Write a Program to find the sum of all 1D Array elements by passing an array as an argument using UDF
#include <stdio.h>
int sumarray(int a[])
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum+=a[i];
    }
    printf("sum: %d\n", sum);
}
int main()
{
    int a[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the  :- ");
        scanf("%d", &a[i]);
    }
    sumarray(a);
}