#include<stdio.h> 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  MultiDigits
//      Description:    Returns the product of all digits of a number
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           26/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int MultiDigits(int iNo) 
{ 
    int iDigit = 0, iMul = 1;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 1)
    {
        iDigit = iNo % 10;
        
        iMul = iMul * iDigit;
        
        iNo = iNo / 10;
    }
    return iMul;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    
    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    iRet = MultiDigits(iValue); 
    
    printf("%d",iRet); 

    return 0; 
}
/*
    time complexity: O(d)
*/