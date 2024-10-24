// Q.1 Write a Program to find the reverse of a 1D array using a Chain of Pointers.
#include<stdio.h>  
int main()  
{  
    int n, arr[n], i;  
    printf("Enter the size of the array: ");  
    scanf("%d", &n);  
    printf("Enter the elements: ");  
    for(i = 0; i < n; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
    int rev[n], j = 0;  
    for(i = n-1; i >= 0; i--)  
    {  
        rev[j] = arr[i];  
        j++;  
    }  
    printf("The Reversed array: ");  
    for(i = 0; i < n; i++)  
    {  
        printf("%d ", rev[i]);  
    }  
    return 0;
}  