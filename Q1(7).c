#include <stdio.h>
#include <string.h>

int main()
{
    char string[1000];
    int i,len,flag=0;
    
    printf("Enter the string :- ");
    scanf("%s",string);
    
    len = strlen(string);
    
    for(int i=0;i<len;i++)
    {
        if(string[i]!=string[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag)
    {
        printf("String not palindrome ",string);
    }
    else 
    {
        printf("String palindrome ",string);
    }
    return 0;
}