#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays a pattern with alternating rows of lowercase letters and numbers. Odd rows display consecutive letters starting from 'a', even rows display consecutive numbers starting from 1
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
            ch = 'a';
            for(iP2 = 1; iP2 <= iCol; iP2++)
            {
                printf("%c  ", ch);
                ch++;
            }
        }  
        else
        {
            for(iP2 = 1; iP2 <= iCol; iP2++)
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