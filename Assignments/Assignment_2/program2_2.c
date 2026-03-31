#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    It is used to display '*' (asterisk) according to the given number
//      Input:          int
//      Output:         None
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/1/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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
