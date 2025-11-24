#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays pattern of $ * repeatedly according to user input
//      Input:          Integer (iNo)
//      Output:         None (prints pattern on console)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("    $   *");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}

/*
The loop runs from iCnt = 0 to iCnt < iNo, so it executes iNo times.
Each iteration prints the pattern once.

Time complexity: O(n)
(where n is the value of iNo)
*/