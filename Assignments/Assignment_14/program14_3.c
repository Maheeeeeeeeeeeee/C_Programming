#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountTwo
//      Description:    Counts how many times the digit 2 appears in the given number
//      Input:          int
//      Output:         int (number of occurrences of digit 2)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountTwo(int iNo)
{
    int iDigit = 0, iTwo = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit == 2)
        {
            iTwo = iTwo + 1;
        }
        
        iNo = iNo / 10;
    }
    return iTwo;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = CountTwo(iValue);

    printf("%d", iRet);


    return 0; 
}
/*
Time Complexity: O(n)
*/