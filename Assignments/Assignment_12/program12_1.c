#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  print_factors
//      Description:    Prints all factors of the given number except the number itself
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void print_factors(int number)
{
    int iCnt = 0;

    if(number < 0)
    {
        number = -number;
    }

    for(iCnt = 1; iCnt <= (number / 2); iCnt++)
    {
        if((number % iCnt) == 0)
        {
            printf("%d\n",iCnt);
        }   
    }
}

int main()
{
    int number;

    printf("Enter number : ");
    scanf("%d",&number);
    print_factors(number);
    
    return 0;
}

/*
    Time complexity = O(n)
*/