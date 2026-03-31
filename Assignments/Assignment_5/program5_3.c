#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CheckLeapYear
//      Description:    Checks whether a given year is a leap year or not and displays the result
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckLeapYear(int year)
{
    if(year < 0)
    {
        year = -year;
    }

    if(((year%4) == 0) )
    {
        if((year % 100) == 0 && ((year%400) != 0))
        {
            printf("Not Leap Year");
        }
        else 
        {
            printf("Leap year");
        }
    }
    else
    {
        printf("Not Leap year");
    }
}

int main()
{
    int yr;
    printf("Enter year: ");
    scanf("%d",&yr);
    CheckLeapYear(yr);

    return 0;
}
