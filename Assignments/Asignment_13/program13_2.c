#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  print_even_numbers
//      Description:    Prints all even numbers from 0 up to the given limit
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_even_numbers(int limit)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt <= limit; iCnt++)
    {   
        if(iCnt % 2 == 0)
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

    print_even_numbers(limit);

    return 0;
}

/*
    the overall time complexity of print_even_numbers is:

        O(n), where n=limit.
*/