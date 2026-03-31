#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  DollarToINR
//      Description:    Converts a given amount in US Dollars to Indian Rupees
//      Input:          int 
//      Output:         int 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int DollarToINR(int iNo)
{
    int INR = 0;
    INR = 70 * iNo;
    
    return INR;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number in USD");
    scanf("%d", &iValue);

    iRet = DollarToINR(iValue);

    printf("Value in INR is %d", iRet);

    return 0;
}
/*
Time Complexity: O(1) — constant time
*/