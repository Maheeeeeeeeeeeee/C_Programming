#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Display
//      Description:    It is used to display numbers from 5 to 1 in decreasing order
//      Input:          None
//      Output:         int (but logically None, as it does not return any value)
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/1/2025
//
//////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Display()
{
    int i = 0;
    i =  5;
    while(i > 0)
    {
        printf("%d\n",i);
        i--;
    }
}

int main()
{
    Display();

    return 0;
}

