// Q .1 WAP to take price of three products from user.Find total amount with addition of 18 % GST in final amount.

#include <stdio.h>
int main()
{
    int a, b, c, qty;
    float total, gst, namt;

    printf("\n________________________________________________________\n");
    printf("Enter value of a :- ");
    scanf("%d", &a);

    printf("Enter value of b :- ");
    scanf("%d", &b);

    printf("Enter value of c :- ");
    scanf("%d", &c);

    printf("Enter quantity :- ");
    scanf("%d", &qty);

    total = qty * (a + b + c);
    gst = total * 0.18;
    namt = total - gst;

    printf("\n________________________________________________________\n");
    
    printf("Net amount :- %.2f", namt);
    
    printf("\n________________________________________________________\n");

    return 0;
}
