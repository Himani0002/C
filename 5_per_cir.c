// Q.5 Write a Program to find the Perimeter of the circle

#include <stdio.h>
int main()
{

   float r, pi=3.14;
   
   printf("\n________________________________________________________________\n");
   
   printf("Enter the radius :- ");
   scanf("%f", &r);
   
   printf("\n________________________________________________________________\n");
   
  
   printf("Perimeter of the Circle = %.2f\n", 2 * pi * r);

   printf("\n________________________________________________________________\n");
   printf("Area of the Circle = %.2f\n", pi * r * r);
   printf("\n________________________________________________________________\n");

   return 0;
}
