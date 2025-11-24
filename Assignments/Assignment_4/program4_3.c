#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  NonFact
//      Description:    Displays all non-factors of a given number
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void NonFact(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo%iCnt != 0)
        {
            printf("%d\n", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    NonFact(iValue);

    return 0;
}
