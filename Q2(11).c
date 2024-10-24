// Q.2 Write a Program to count the total number of digits in a number.
#include<stdio.h>
int main()
{
    int n,count=0;
    
    printf("Enter the number :- ");
    scanf("%d", &n);
    
    while(n!=0)
    {
        n=n/10;
        count++;
    }
    
    printf("count = %d\n", count);
    
    return 0;
}