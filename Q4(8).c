//  Q.4 Write a Program to print odd numbers from N to 1 using a while loop.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter the number :- ");
    scanf("%d",&n);
    
    while(n>=1)
    {
        if(n % 2 == 1)
        {
            printf("%d \n",n);
        }
        n--;
    }

    return 0;
}