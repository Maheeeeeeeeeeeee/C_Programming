#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  ChkEven
//      Description:    Checks whether a number is even or odd
//      Input:          int
//      Output:         bool 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool ChkEven(int iNo)
{
    int iRem = 0;                                               
    iRem = iNo % 2;

    if(iRem == 0)                                           
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
    int iValue = 0;
    bool bRet = false;

    printf("Enter number : ");
    scanf("%d", &iValue);

    bRet = ChkEven(iValue);

        if(bRet == true)
    {   printf("%d is even number\n", iValue);  }
    else
    {   printf("%d is odd number\n", iValue);   }

    return 0;

}
