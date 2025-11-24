#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  KMtoMeter
//      Description:    Converts distance from kilometers to meters
//      Input:          int 
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int KMtoMeter(int iNo)
{
    int iMtr = 0;

    iMtr = iNo * 1000;

    return iMtr;

}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Distance in Meter is %d", iRet);

    return 0;
}

/*
    Time Complexity: O(1)
*/