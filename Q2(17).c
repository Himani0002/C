// Q.2 Write a Program to find the maximum number from the given 4 numbers using nested if else.

#include <stdio.h>
int main()
{
    int a, b, c, d;
    
    printf("\n----------------------------------------------------\n");
    printf("Enter the Four Numbers :");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("\n----------------------------------------------------\n");
    
    if (a > b)
    {
        if (a > c)
        {
            if (a > d)
            {
                printf("A %d is big", a);
            }
            else
            {
                printf("D %d is big", d);
            }
        }
    }
    else if (b > c)
    {
        if (b > d)
        {
            printf("B %d is big", b);
        }
        else
        {
            printf("D %d is big", d);
        }
    }
    else if (c > d)
    {
        printf("C %d is big", c);
    }
    else
    {
        printf("D %d is big", d);
    }
    
    printf("\n----------------------------------------------------\n");

    return 0;
}
