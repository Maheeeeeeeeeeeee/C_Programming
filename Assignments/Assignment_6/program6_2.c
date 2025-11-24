#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  ChkGreater
//      Description:    Checks whether a number is greater than 100
//      Input:          int
//      Output:         bool (true if greater than 100, false otherwise)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {    
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    int iValue  = 0;
    bool bRet = false;
    printf("Please enter number");
    scanf("%d",&iValue);
    bRet = ChkGreater(iValue);
    if(bRet)
    {
        printf("Greater");
    }
    else
    {   
        printf("Smaller");
    }

    return 0;
}
