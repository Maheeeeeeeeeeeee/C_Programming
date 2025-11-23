#include<stdio.h>
int FactRev(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = (iNo/2); iNo > 0; iCnt--)
    {
        if(iNo%iCnt == 0)
        {
            printf("%d\n",iCnt);
        }
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = FactRev(iValue);

    printf("%d",iRet);

    return 0;
}