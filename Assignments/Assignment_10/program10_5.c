#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  SquareMeter
//      Description:    Converts area from square feet to square meters
//      Input:          float
//      Output:         double
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


double SquareMeter(float iValue)
{
    double dSqMtr = 1;

    dSqMtr = iValue * 0.0929;

    return dSqMtr;
}

int main()
{
    float fValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet");
    scanf("%f", &fValue);

    dRet = SquareMeter(fValue);

    printf("Area in Square meter is %lf", dRet);
    return 0;
}

/*
    Time Complexity: O(1)
*/