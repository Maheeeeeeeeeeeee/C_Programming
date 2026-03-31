#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  RangeDisplayEven
//      Description:    Displays all even numbers between the given range (excluding boundaries)
//      Input:          int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////


void RangeDisplayEven(int iStart, int iEnd)
{
    int iCnt = 0;

    if(iStart > iEnd)
    {
        printf("Invalid input");
    }

    else
    {
        for(iCnt = iStart + 1; iCnt < iEnd; iCnt++)
        {
            if((iCnt%2) == 0)
            {
                printf("%d  ", iCnt);
            }
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

    RangeDisplayEven(iValue1, iValue2);

    return 0;
}

/*
Time Complexity: O(n) where n = iEnd - iStart
*/