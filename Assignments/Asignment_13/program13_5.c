#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  sum_even_numbers
//      Description:    Calculates and returns the sum of all even numbers from 0 up to the given limit
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int sum_even_numbers(int limit)
{
    int iCnt = 0, iSum = 0;

    for(iCnt = 0; iCnt <= limit; iCnt++)
    {   
        if(iCnt % 2 == 0)
        {
            iSum = iSum + iCnt;
        }
    }

    return iSum;
}

int main()
{
    int limit;

    printf("Enter numbers : ");
    scanf("%d", &limit);

    printf("%d", sum_even_numbers(limit));

    return 0;
}
/*
    time complexity = O(n). 
*/