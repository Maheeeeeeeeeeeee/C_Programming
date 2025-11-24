#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  TableRev
//      Description:    Displays the multiplication table of a given number in reverse order (10 to 1)
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void TableRev(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt > 0; iCnt--)
    {
        printf("%d  ", iCnt * iNo);
    } 
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    TableRev(iValue);

    return 0;
}
/*
The loop runs exactly 10 times, counting down from 10 to 1.

Each iteration does a single multiplication and printf.

Time Complexity: O(1) — constant time, independent of the input iNo.
*/