#include <stdio.h>
int main()
{
    float bs, hra, da, gs, ta;
    

    printf("\n----------------------------------------------------\n");
    printf("Enter basic salary :- ");
    scanf("%f", &bs);
    printf("\n----------------------------------------------------\n");

    hra = bs * (10 / 100);
    da = bs * (5 / 100);
    ta = bs * (8 / 100);

    gs = bs + hra + da + ta;

    printf("Gross Salary = %f\n", gs);
    printf("\n----------------------------------------------------\n");

    return 0;
}