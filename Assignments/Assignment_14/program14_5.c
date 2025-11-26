#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Count
//      Description:    Counts how many digits in the given number are strictly less than 6
//      Input:          int
//      Output:         int (count of digits < 6)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit < 6)
        {
            iCnt = iCnt + 1;
        }
        
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);


    return 0; 
}

/*
Time Complexity: O(n)
*/