// Q.2 Write a Program to find the length of the String by passing a string as an argument using UDF
#include<stdio.h>
#include<string.h>

int String(char str[])
{
    printf("Legth = %d",strlen(str));
}

int main()
{
    char str[100]="Himani gohil";
    String(str);
    
    return 0;
}