#include <stdio.h>
int main()
{
    long int ang1, ang2, ang3;

    printf("\n----------------------------------------------------\n");
    printf("Input two angles of triangle :- ");
    scanf("%ld, %ld", &ang1, &ang2);
    printf("\n----------------------------------------------------\n");

    ang3 = 180 - (ang1 + ang2); 

    printf("Third angle of the triangle :  %ld\n", ang3);
    printf("\n----------------------------------------------------\n");

    return 0;
}
