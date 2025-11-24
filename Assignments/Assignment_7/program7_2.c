#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    Prints numbers from 0 up to the given number
//      Input:          Integer (iNo)
//      Output:         None (prints on console)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= iNo; iCnt++)
    {
        printf("%d  ", iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}

/*
The loop in Display runs from iCnt = 0 to iCnt <= iNo
which means it executes (iNo + 1) times.

Time Complexity: O(n)
(n being the input number iNo)
*/