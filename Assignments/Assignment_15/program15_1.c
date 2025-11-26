#include<stdio.h> 

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CountEven
//      Description:    Counts how many even digits are present in the given number
//      Input:          int
//      Output:         int 
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

int CountEven(int iNo) 
{ 
    int iDigit = 0, iCnt = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    while(iNo > 0)
    {
        iDigit = iNo % 10;
        
        if(iDigit%2 == 0)
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
    
    iRet = CountEven(iValue); 
    
    printf("%d",iRet); 

    return 0; 
}

/*
    time complexity: O(d)
*/