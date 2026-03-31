#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Check
//      Description:    Checks whether the number 11 is present in the array
//      Input:          int[], int
//      Output:         bool
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

bool Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;
    bool bRet = false;
    
    printf("Enter number of elements");
    scanf("%d",&iSize);
    
    p  = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }
    
     printf("Enter elements ");
    
    for(iCnt = 0;iCnt<iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    bRet = Check(p, iSize);
    
    if(bRet == true)
    {
        printf("11 is present");
    }
    else
    {
        printf("11 is absent");
    }
    
    free(p);
    
    return 0;
}