#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    Displays a number line from negative of given number to positive of it
//      Input:          Integer (iNo)
//      Output:         None (prints on screen)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    int iNeg = -iNo;
    for(iCnt = iNeg; iCnt <= iNo; iCnt++)
    {
        printf("%d  ", iCnt);
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
The loop starts at -iNo and ends at iNo
Total count of numbers printed = 2 * iNo + 1

Time Complexity: O(n)
(n = input value iNo)
*/