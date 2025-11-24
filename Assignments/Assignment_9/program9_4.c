#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  OddFactorial
//      Description:    Calculates the factorial of odd numbers up to the given number
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int OddFactoral(int iNo)
{
    int iCnt = 0, iDFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) != 0)
        {
            iDFact = iDFact * iCnt;
        } 
    }

    return iDFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = OddFactoral(iValue);

    printf("Odd Factorial of number is %d", iRet);

    return 0;
}

/*
    Time Complexity: O(n) where n = iNo
*/