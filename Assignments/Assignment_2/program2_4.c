#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  ChkEven
//      Description:    It is used to check whether the given number is even or odd
//      Input:          int
//      Output:         bool
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/1/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Display(int iNo, int iFrequency)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 0; i < iFrequency; i++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter number : ");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;

}
