#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays a pattern where each row contains the same character starting from 'A', increasing by one character per row, for iRow rows and iCol columns
//      Input:          int, int
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           01-12-2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Pattern(int iRow, int iCol)
{
    int iP1 = 0, iP2 = 0;
    char ch = 'A';

    for(iP1 = 1; iP1 <= iRow; iP1++)
    {
        for(iP2 = 1; iP2 <= iCol; iP2++)
        {
            printf("%c  ", ch);
        }
        
        ch++;            

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