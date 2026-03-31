#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  RangeDisplayRev
//      Description:    Displays all numbers between the given starting and ending range in reverse order
//      Input:          int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid input");
    }
    else
    {
        for(iCnt = iEnd - 1; iCnt > iStart; iCnt--)
        {
            printf("%d  ", iCnt);
        }
    }
}

int main()
{       
    int iValue1 = 0, iValue2 = 0;

    printf("Enter starting point");
    scanf("%d", &iValue1);

    printf("Enter ending point");
    scanf("%d", &iValue2);

    RangeDisplayRev(iValue1, iValue2);

    return 0;
}
/*
    Time Complexity: O(n) where n = iEnd - iStart
*/