#include<stdio.h>

//////////////////////////////////////////////////////////////////////////////////////////////////////////////
//
//      Function Name:  DisplayConvert
//      Description:    Converts a lowercase character to uppercase and displays it;
//                      if character is already uppercase, displays it as is
//      Input:          char
//      Output:         void
//      Author:         Mahesh Dhanyakumar Boke
//      Date:           24/11/2025
//
/////////////////////////////////////////////////////////////////////////////////////////////////////////////

void DisplayConvert(char CValue) 
{
    if(CValue >= 'a' && CValue <= 'z') 
    {
        printf("%c", CValue - 32); 
    }
    else if(CValue >= 'A' && CValue <= 'Z') 
    {
        printf("%c", CValue); 
    }
}


int main()
{
    char cValue = '\0';
    printf("Enter character\n");
    scanf("%c",&cValue);
    DisplayConvert(cValue);

    return 0;
}
