#include<stdio.h>
int MultFact(int iNo)
{
    int iCnt = 0;
    int Mlt = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo/2); iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            Mlt = Mlt * iCnt;
        }
    }
    
    return Mlt;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter number");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);

    printf("%d",iRet);

    return 0;
}