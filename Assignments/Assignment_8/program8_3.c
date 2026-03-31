#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Factorial
//      Description:    Calculates factorial of a given integer
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Factorial(int iNo)
{
    int iCnt = 0, iFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        iFact = iFact * iCnt;
    }
    return iFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial of number is %d", iRet);

    return 0;
}

/*
The loop runs from 1 to iNo.

Number of iterations = iNo.

Each iteration performs a constant-time multiplication.

Time Complexity: O(n) where n = iNo
*/