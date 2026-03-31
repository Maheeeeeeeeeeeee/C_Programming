#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  print_numbers
//      Description:    Prints all numbers from 1 up to the given limit
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= limit; iCnt++)
    {
        printf("%d  ", iCnt);
    }
}

int main()
{
    int limit;

    printf("Enter numbers : ");
    scanf("%d", &limit);

    print_numbers(limit);

    return 0;
}

/*
    Time Complexity = O(n)
*/