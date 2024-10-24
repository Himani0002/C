// Q.4 Write a Program to find Simple interest

#include<stdio.h>
int main()
{
    float p,r,t;
    
    printf("\n________________________________________________________________\n");
    
    printf("Enter the Principal :- ");
    scanf("%f",&p);
    printf("Enter the Rate :- ");
    scanf("%f",&r);
    printf("Enter the Time :- ");
    scanf("%f",&t);
    
    printf("\n________________________________________________________________\n");
    
    printf("Simple interest :- %.2f",(p*r*t)/100);
    
    printf("\n________________________________________________________________\n");
    
    return 0;
    
}