// Q.1 Write a Program to find the length of a 1D array.
#include<stdio.h>
int main()
{
    int a[5],count=0;
    
    printf("\n----------------------------------------\n");
    for(int i = 0; i < 5; i++)
    {
        printf("Enter the element :- ");
        scanf("%d",&a[i]);
        count++;
    }
    
    printf("\n----------------------------------------\n");
    printf("Count :- %d",count);
    printf("\n----------------------------------------\n");
    return 0;
    
}