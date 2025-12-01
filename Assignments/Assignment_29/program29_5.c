#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays a pattern of consecutive numbers with each row starting from its row number
//      Input:          int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iP1 = 0, iP2 = 0;

    char ch = 'a';

    for(iP1 = 1; iP1 <= iRow; iP1++)
    {
        if(iP1 % 2 != 0)
        {
            for(iP2 = iP1; iP2 <= iCol+iP1-1; iP2++)
            {
                printf("%d  ", iP2);
            }
        }  
        else
        {
            for(iP2 = iP1; iP2 <= iCol+iP1-1; iP2++)
            {
                printf("%d  ", iP2);
            }
        } 
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns");
    scanf("%d %d",&iValue1, &iValue2);
    
    Pattern(iValue1, iValue2);
    
    return 0;
}