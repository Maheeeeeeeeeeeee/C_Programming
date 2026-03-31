#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  MultipleDisplay
//      Description:    Displays first five multiples of given number
//      Input:          Integer (iNo)
//      Output:         None (prints multiples)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt  = 0, iMlt = 0;

    iMlt = iNo*5;

    for(iCnt = iNo; iCnt <= iMlt; iCnt = iCnt + iNo)
    {
        printf("%d  ", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    MultipleDisplay(iValue);

    return 0;
}

/*

The function MultipleDisplay always prints exactly five multiples of the input number. The loop runs from iNo up to iNo * 5, increasing by iNo each time.

So the time complexity is:
O(1) — constant time.

*/