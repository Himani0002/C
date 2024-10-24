#include <stdio.h>
int main()
{
    int a, b, small;
    printf("Enter any two number: ");
    scanf("%d%d", &a, &b);
    printf("\n______________________________________________________________\n");
    if (a < b)
    {
        small = a;
    }
    else
    {
        small = b;
    }
    printf("\nSmallest of the two number is: %d", small);
    printf("\n______________________________________________________________\n");
    return 0;
}