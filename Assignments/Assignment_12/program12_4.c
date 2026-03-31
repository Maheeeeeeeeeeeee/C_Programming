#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  sum_of_even_factors
//      Description:    Calculates and returns the sum of all even factors of the given number except the number itself
//      Input:          int
//      Output:         int
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

int sum_of_even_factors(int number)
{
    int iCnt = 0, iSum = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number / 2); iCnt++)
    {
        if((number % iCnt) == 0 && (iCnt % 2) == 0)
        {
            iSum = iSum + iCnt;
        }   
    }

    return iSum;
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);

    printf("%d",sum_of_even_factors(number));
    
    return 0;
}
/*
    Time Complexity: O(n)
*/