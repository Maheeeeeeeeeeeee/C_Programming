#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Range
//      Description:    Displays the indices of array elements that are within a specified range
//      Input:          int[], int, int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Range(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] > iStart && Arr[iCnt] < iEnd)
        {
            printf("    %d",iCnt);
        } 
    }
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue1 = 0, iValue2 = 0;
    int *p = NULL;
    
    
    printf("Enter number of elements");
    scanf("%d",&iSize);

    printf("Enter the number");
    scanf("%d",&iValue1);

    printf("Enter the number");
    scanf("%d",&iValue2);

    p = (int *)malloc(iSize * sizeof(int));
    
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
    
    Range(p, iSize,iValue1, iValue2);
    
    free(p);
    
    return 0;
}