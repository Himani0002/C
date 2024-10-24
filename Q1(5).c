// Q.1 Write a Program to find the square of each element of a given 1D array using a Pointer.
#include <stdio.h>
int main()
{
    int a[] = {2, 4, 1, 3, 7};
    int *ptr = a;

    printf("\n___________________________________________\n");
    for (int i = 0; i < 5; i++)
    {
        printf("a[%d]=%d\n", i, *(ptr + i));
    }
    printf("\n___________________________________________\n");
    printf("Square of each element : \n");
    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",(*(ptr + i)) * (*(ptr + i)));
    }
    printf("\n___________________________________________\n");
    return 0;
}