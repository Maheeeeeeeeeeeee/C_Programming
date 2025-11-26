#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  ChkZero
//      Description:    Checks whether the given number contains the digit 0 anywhere within it
//      Input:          int
//      Output:         bool 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkZero(int iNo)
{
    int iDigit = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            return TRUE;
        }
            iNo = iNo / 10;
    }

    return FALSE;
    
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter number");
    scanf("%d", &iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It Contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}

/*
Time Complexity: O(n)
*/