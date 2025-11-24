#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Number
//      Description:    Categorizes the number as small, medium, or large
//      Input:          Int
//      Output:         None 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("small");
    }
    else if(iNo < 100)
    {
        printf("medium");
    }
    else
    {
        printf("large");
    }
}

int main()
{
    int iValue = 0;
    
    printf("Enter number");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}