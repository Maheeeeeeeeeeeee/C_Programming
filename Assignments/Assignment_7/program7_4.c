#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  OddDisplay
//      Description:    Displays all odd numbers less than the given number
//      Input:          Integer (iNo)
//      Output:         None (prints odd numbers)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt < iNo; iCnt = iCnt + 2)
    {
        printf("%d  ", iCnt);
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d", &iValue);

    OddDisplay(iValue);

    return 0;
}

/*
Starts from 1 ,Jumps by +2 each iteration and Stops before iNo

Time Complexity: O(n)
*/