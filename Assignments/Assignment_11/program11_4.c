#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  RangeSumEven
//      Description:    Calculates the sum of all even numbers between the given starting and ending range
//      Input:          int, int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart, int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iStart > iEnd ||  iStart < 0 || iEnd < 0)
    {
        return -1;
    }

    for(iCnt = iStart + 1; iCnt < iEnd; iCnt++)
    {
        if((iCnt % 2) == 0 )
        {
            iSum = iSum + iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter starting point");
    scanf("%d", &iValue1);

    printf("Enter ending point");
    scanf("%d", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == -1)
    {   
        printf("Invalid range");
    }
    else
    {
        printf("Addition is %d", iRet);
    }

    return 0;
}

/*
    ime Complexity: O(n) where n = iEnd - iStart
*/