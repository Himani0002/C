//Q2. Write a program print the factorial of number N using for loop

#include<stdio.h>
int main()
{
    int i,n,fact=1;
    
    printf("\n-----------------------------------------------\n");
    
    printf("Enter the number : - ");
    scanf("%d",&n);
    
    printf("\n-----------------------------------------------\n");
    
    for(int i=1; i<=n ; i++)
    {
        fact=fact*i;
    }
    printf("Factorial = %d\n",fact);
    
    printf("\n-----------------------------------------------\n");
    
    return 0;    
}