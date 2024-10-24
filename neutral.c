//Q.2 Write a Program to find if a given number is neutral or not using a ladder if else.
#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number :-");
    scanf("%d", &n);
    
    if(n == 0)
    {
        printf("\nThis number is Neutral");
    }    
    else if(n < 0)
    {
        printf("This number is Negative");
    }
    else 
    {
        printf("This number is Positive");
    }
    return 0;
}

