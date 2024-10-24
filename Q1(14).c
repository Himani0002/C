#include <stdio.h>
int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d", &n);

    (n % 2 == 0) ? printf("Number is Even") : printf("Number is Odd");
    return 0;
}
