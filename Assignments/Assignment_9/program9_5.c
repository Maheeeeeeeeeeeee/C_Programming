#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  FactorialDiff
//      Description:    Calculates the difference between the factorial of even numbers and the factorial of odd numbers up to a given number
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEFact = 1, iDFact = 1, iDiff = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEFact = iEFact * iCnt;
        } 
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iDFact = iDFact * iCnt;
        } 
    }

    iDiff = iEFact - iDFact;

    return iDiff;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Facotorial Difference is %d", iRet);

    return 0;
}
/*
    Time Complexity: O(n) where n = iNo
*/