#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    It is used to display '*' as many times as the given number
//      Input:          int
//      Output:         None
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/1/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iCnt < iNo)
    {
        printf("*");
        iCnt++;
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
