#include<stdio.h>
#include<stdlib.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  DigitsSum
//      Description:    Displays the sum of digits of each element in the array
//      Input:          int[], int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DigitsSum(int Arr[], int iLength)
{
    int iCnt1 = 0, iCnt2 = 0, iStr = 0, iSum = 0;

    for(iCnt1 = 0; iCnt1 < iLength; iCnt1++)
    {
        iSum = 0;

        for(iCnt2 = Arr[iCnt1]; iCnt2 > 0; iCnt2 = iCnt2 / 10)
        {
            iStr = iCnt2 % 10;

            iSum = iSum + iStr;
        }
        printf("    %d", iSum);
    }
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *p = NULL;

    printf("Enter a number of elements");
    scanf("%d", &iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter %d elements \n", iSize);

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter element %d : ",iCnt+1);
        scanf("%d", &p[iCnt]);
    }

    DigitsSum(p, iSize);

    free(p);

    return 0;
}