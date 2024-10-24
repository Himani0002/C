#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a,b and c:- ");
    scanf("%d%d%d", &a, &b, &c);

    (a < b)
        ? (a < c)

              ? printf("A is Minimum")
              : printf("C is Minimum")

    : (b < c)

        ? printf("B is Minimum")
        : printf("C is Minimum");

    return 0;
}