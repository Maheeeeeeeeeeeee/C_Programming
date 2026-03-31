#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  sum_natural_numbers
//      Description:    Calculates and returns the sum of all natural numbers from 0 up to the given limit
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int sum_natural_numbers(int limit)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt <= limit; iCnt++)
    {   
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int limit;

    printf("Enter numbers : ");
    scanf("%d", &limit);

    printf("%d", sum_natural_numbers(limit));

    return 0;
}

/*
    time complexity = O(n). 
*/