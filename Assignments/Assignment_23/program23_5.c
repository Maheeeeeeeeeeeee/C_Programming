#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Product
//      Description:    Calculates the product of all odd elements in the array
//      Input:          int[], int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iPrd = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] % 2 != 0)
        {
            iPrd = iPrd * Arr[iCnt];
        }
    }
    return iPrd;
}

int main()
{
    int iSize = 0,iRet = 0,iCnt = 0;
    int *p = NULL;

    printf("Enter number of elements");
    scanf("%d",&iSize);
    
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
    
    iRet = Product(p, iSize);

    printf("Result is %d", iRet);
    
    free(p);
    return 0;
}