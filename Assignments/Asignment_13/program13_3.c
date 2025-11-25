#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  print_odd_numbers
//      Description:    Prints all odd numbers from 0 up to the given limit
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_odd_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= limit; iCnt++)
    {   
        if(iCnt % 2 != 0)
        {
            printf("%d  ", iCnt);
        }
    }
}

int main()
{
    int limit;

    printf("Enter numbers : ");
    scanf("%d", &limit);

    print_odd_numbers(limit);

    return 0;
}

/*
    time complexity = O(n). 
*/