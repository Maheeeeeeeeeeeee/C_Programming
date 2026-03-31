#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountFour
//      Description:    Counts how many times the digit 4 appears in the given number
//      Input:          int
//      Output:         int (number of occurrences of digit 4)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountFour(int iNo)
{
    int iDigit = 0, iFour = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 4)
        {
            iFour = iFour + 1;
        }
        
        iNo = iNo / 10;
    }
    return iFour;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = CountFour(iValue);

    printf("%d", iRet);


    return 0; 
}

/*
Time Complexity: O(n)
*/