#include<stdio.h> 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  DisplayDigit / ChkZero / CountTwo / CountFour / Count / CountEven / CountOdd / CountRange
//      Description:    Performs the specific digit operation on a number
//      Input:          int
//      Output:         int / bool
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           26/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountRange(int iNo) 
{ 
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit > 3 && iDigit < 7)
        {
            iCnt = iCnt + 1;
        }
        
        iNo = iNo / 10;
    }
    return iCnt;
} 

int main() 
{ 
    int iValue = 0; 
    int iRet = 0; 
    
    printf("Enter number"); 
    scanf("%d",&iValue); 
    
    iRet = CountRange(iValue); 
    
    printf("%d",iRet); 

    return 0; 
}
/*
    time complexity: O(d)
*/