// Q.1 Write a Program to print all alphabets from a to z by skipping 3 alphabets using do while loop.
#include<stdio.h>
int main()
{
    char ch='a';
    printf("Enter the a -z are : ");

    while(ch<='z')
    {
        printf("%c", ch);
        ch=ch+4;
    }
    return 0;
}