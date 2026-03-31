#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    Displays a pattern of '*' followed by '#' for the given number of times
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("*   ");
    }

    for(iCnt = 0; iCnt < iNo; iCnt++)
    {
        printf("#   ");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
/*
The first loop runs iNo times → O(n)

The second loop also runs iNo times → O(n)

Total number of operations ≈ iNo + iNo = 2*iNo

Time Complexity: O(n) where n = iNo
*/