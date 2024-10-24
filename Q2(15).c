#include <stdio.h>
int main()
{
    int choice;

    printf("\n1.English");
    printf("\n2.Gujarati");
    printf("\n3.Hindi");
    printf("\nEnter the choice :- ");
    scanf("%d", &choice);

    switch (choice)
    {

    case 1:
        switch (choice)
        {

            printf("\n1.for Internet Recharge");
            printf("\n2.for Top-up Recharge");
            printf("\n3.for Special Recharge");
            printf("\nEnter the choice :- ");
            scanf("%d", &choice);

        case 1:
        case 2:
        case 3:
            printf("You have successfully done  Top-up Recharge");
            break;
        }
        break;

    case 2:
        switch (choice)
        {

            printf("\n1.Internet Recharge ke liye 1 dabaiye");
            printf("\n2.Top-up Recharge ke liye 2 dabaiye");
            printf("\n3.Special Recharge ke liye 3 dabaiye");
            printf("\nEnter the choice :- ");
            scanf("%d", &choice);

        case 1:
        case 2:
        case 3:
            printf("Aapne safaltapurvak Internet Recharge kar liya he.");
            break;
        }
        break;

    case 3:
        switch (choice)
        {

            printf("\n1.Internet Recharge mate 1 dabavo");
            printf("\n2.Top-up Recharge mate 2 dabavo");
            printf("\n3.Special Recharge mate 3 dabavo");
            printf("\nEnter the choice :- ");
            scanf("%d", &choice);

        case 1:
        case 2:
        case 3:
            printf("Tame safaltapurvak Special Recharge karyu chhe.");
            break;
        }
        break;
    }
    return 0;
}