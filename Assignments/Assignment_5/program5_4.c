#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  CheckNumberType
//      Description:    Determines whether a number is positive, negative, or zero and displays the result
//      Input:          int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////


void CheckNumberType(int num)
{

    if(num == 0)
    {
        printf("Number is Zero");
    }
    else if( num > 0)
    {
        printf("Number is positive");
    }
    else
    {
        printf("Number is negative");
    }
}

int main()
{
    int number;
    
    printf("Enter number: ");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;

}
