#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays a pattern of consecutive numbers starting from 1, filling iRow rows and iCol columns
//      Input:          int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iP1 = 0, iP2 = 0, iP3 = 0;

    iP3 = 1;

    for(iP1 = 1; iP1 <= iRow; iP1++)
    {
        for(iP2 = 1; iP2 <= iCol; iP2++)
        {
            printf("%d  ", iP3);
            iP3++;
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