#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  count_factors
//      Description:    Counts and prints the total number of factors of the given number (excluding the number itself)
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void count_factors(int number)
{
    int iCnt = 0, iTot = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number / 2); iCnt++)
    {
        if((number % iCnt) == 0)
        {
            iTot++;
        }   

        printf("%d", iTot);
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);
    count_factors(number);
    
    return 0;
}

/*
    Time Complexity:

    O(1) * (n/2) => O(n)
*/