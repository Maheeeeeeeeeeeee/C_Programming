#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  FhtoCs
//      Description:    Converts temperature from Fahrenheit to Celsius
//      Input:          float
//      Output:         double 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

double FhtoCs(float fTemp)
{
    double dCels = 0;

    dCels = (fTemp - 32.0) * (5.0/9.0);
        
    return dCels;
}

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;

    printf("Enter temperature in Fahrenheit");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("Temperature in Celsius is %lf", dRet);

    return 0;
}

/*
    Time Complexity: O(1)
*/