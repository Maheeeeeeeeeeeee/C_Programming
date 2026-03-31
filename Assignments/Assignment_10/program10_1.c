#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CircleArea
//      Description:    Calculates the area of a circle for a given radius
//      Input:          float 
//      Output:         double
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


double CircleArea(float fRadius)
{
    double dArea = 0;

    dArea = ((22.0/7.0) * fRadius * fRadius);

    return dArea;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter radius");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of the cirlce is %f", dRet);

    return 0;
}

/*
    Time Complexity: O(1)
*/