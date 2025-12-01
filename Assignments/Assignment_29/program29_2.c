#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  Pattern
//      Description:    Displays a pattern of alternating even and odd numbers in rows. Odd rows start with 2, even rows start with 1, incrementing by 2
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
        if(iP1 % 2 != 0)
        {
            iP3 = 2;
            for(iP2 = 1; iP2 <= iCol; iP2++)
            {
                printf("%d  ", iP3);
                iP3 = iP3 + 2;
            }
        }  
        else
        {
            iP3 = 1;
            for(iP2 = 1; iP2 <= iCol; iP2++)
            {
                printf("%d  ", iP3);
                iP3 = iP3 + 2;
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