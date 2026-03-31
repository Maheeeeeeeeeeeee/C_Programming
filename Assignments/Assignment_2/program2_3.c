#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    It is used to display "Hello" if the number is less than 10, otherwise "Demo"
//      Input:          int
//      Output:         None
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/1/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number : ");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}
