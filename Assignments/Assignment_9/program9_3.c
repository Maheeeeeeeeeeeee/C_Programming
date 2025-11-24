#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  EvenFactorial
//      Description:    Calculates the factorial of all even numbers up to the given number
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEFact = 1;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEFact = iEFact * iCnt;
        } 
    }

    return iEFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}
/*
    Time Complexity: O(n) where n = iNo
*/