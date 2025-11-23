#include<stdio.h>

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