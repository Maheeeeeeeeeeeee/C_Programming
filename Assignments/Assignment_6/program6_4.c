    #include<stdio.h>

    int Multiply(int iNo1, int iNo2, int iNo3)
    {
        int iMlt = 0;

        if(iNo1 != 0 && iNo2 != 0 && iNo3 != 0)
        {
            iMlt = iNo1 * iNo2 * iNo3;
            return iMlt;
        }
        else
        {
            return 0;
        }

    }  

    int main()
    {
        int iValue1 = 0, iValue2 = 0, iValue3 = 0, iRet = 0;
        printf("Please enter three numbers");
        scanf("%d %d %d", &iValue1, &iValue2, &iValue3);
        iRet = Multiply(iValue1, iValue2, iValue3);
        printf("Multiplication of three numbers is : %d", iRet);

        return 0;
    }