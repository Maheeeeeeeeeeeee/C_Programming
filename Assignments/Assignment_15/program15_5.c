#include<stdio.h> 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountDiff
//      Description:    Returns the difference between sum of even and odd digits
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           26/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountDiff(int iNo) 
{ 
    int iDigit = 0, iCnt1 = 0, iCnt2 = 0, iDiff = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit % 2 == 0)
        {
            iCnt1 = iCnt1 + iDigit;
        }

        if(iDigit % 2 != 0)
        {
            iCnt2 = iCnt2 + iDigit;
        }
        
        iNo = iNo / 10;
    }

    iDiff = iCnt1 - iCnt2;

    return iDiff;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    
    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    iRet = CountDiff(iValue); 
    
    printf("%d",iRet); 

    return 0; 
}
/*
    time complexity: O(d)
*/