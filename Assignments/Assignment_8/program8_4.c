#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Table
//      Description:    Displays the multiplication table of a given number up to 10
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d  ", (iNo*iCnt));
    }

}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}
/*
The loop always runs exactly 10 times, regardless of the value of iNo.

Each iteration performs a single multiplication and a printf (both constant-time operations).

Time Complexity: O(1) — constant time
*/