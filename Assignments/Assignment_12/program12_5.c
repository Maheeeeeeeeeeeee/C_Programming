#include<stdio.h>
#include<stdbool.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  is_divisible_by_five
//      Description:    Checks whether the given number is divisible by 5
//      Input:          int
//      Output:         bool (true if divisible by 5, false otherwise)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           25/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


bool is_divisible_by_five(int number)
{
    if(number % 5 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int number;

    printf("Enter number : ");

    scanf("%d", &number);
    printf("%s\n", is_divisible_by_five(number) ? "Yes" : "No");

    return 0;
}

/*
    Time Complexity: O(1) (constant time)
*/