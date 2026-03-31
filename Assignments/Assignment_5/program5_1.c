#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CheckEvenOdd
//      Description:    Checks whether a number is even or odd and displays the result
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void CheckEvenOdd(int num)
{
    if((num%2) == 0)
    {
        printf("Number is Even");
    }
    else 
    {
        printf("Number is Odd");
    }
}

int main()
{   
    int number;

    printf("Enter number:");
    scanf("%d", &number);

    CheckEvenOdd(number);

    return 0;
}
