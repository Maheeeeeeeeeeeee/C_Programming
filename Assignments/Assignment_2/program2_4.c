#include<stdio.h>

int Display(int iNo, int iFrequency)
{
    int i = 0;
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(i = 0; i < iFrequency; i++)
    {
        printf("%d\n", iNo);
    }
}

int main()
{
    int iValue = 0;
    int iCount = 0;

    printf("Enter number : ");
    scanf("%d", &iValue);

    printf("Enter number : ");
    scanf("%d", &iCount);

    Display(iValue,iCount);

    return 0;
}