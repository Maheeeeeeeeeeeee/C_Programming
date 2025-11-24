#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  FactDiff
//      Description:    Calculates and returns the difference between the sum of factors
//                      and the sum of non-factors of a given number
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactDiff(int iNo)
{
    int iCnt = 0, iSumFact = 0, iSumNonFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {   
        if((iNo % iCnt) == 0)
        {
            iSumFact = iSumFact + iCnt;
        }
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {   
        if((iNo % iCnt) != 0)
        {
            iSumNonFact = iSumNonFact + iCnt;
        }
    }

    return iSumFact - iSumNonFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue);
    printf("%d",iRet);
    
    return 0;
}
