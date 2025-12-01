#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Frequency
//      Description:    Counts the frequency of a given number in the array
//      Input:          int[], int, int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, iFrq = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrq++;
        }
    }
    return iFrq;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0, iValue = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);
    
    printf("Enter the number");
    scanf("%d",&iValue);
    
    p = (int*)malloc(iSize * sizeof(int));
    
    if(p == NULL)
    {
        printf("Unable to allocate memory"); 
        return -1;
    }
        
    printf("Enter %d elements ",iSize);
    
    for(iCnt = 0;iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d",&p[iCnt]);
    }
    
    iRet = Frequency(p, iSize, iValue);

    printf("%d", iRet);
    
    free(p);

    return 0;
}