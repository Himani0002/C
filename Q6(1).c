#include <stdio.h>

int isLeapYear(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        return 1;
    else
        return 0;
}

int main()
{
    int startYear, endYear;

    printf("Enter the starting year: ");
    scanf("%d", &startYear);

    printf("Enter the ending year: ");
    scanf("%d", &endYear);

    if (startYear > endYear)
    {
        printf("Invalid input: Starting year should be less than or equal to ending year.\n");
        return 1;
    }

    int leapYears[100]; // Assuming we won't have more than 100 leap years in the given range
    int count = 0;

    for (int year = startYear; year <= endYear; year++)
    {
        if (isLeapYear(year))
        {
            leapYears[count] = year;
            count++;
        }
    }

    printf("Leap years between %d and %d:\n", startYear, endYear);
    for (int i = 0; i < count; i++)
    {
        printf("%d\n", leapYears[i]);
    }

    return 0;
}
