
//write a program which perform addition of 2 numbers

// Function Name : Addition
//Input : Unsigned integer


#include<stdio.h> 

unsigned int Addition(unsigned int iValue1, unsigned int iValue2)
{
    unsigned int iResult = 0;
    iResult = iValue1 + iValue2;
    return iResult;
}

int main()  //entry point function
{
     unsigned int iNo1 = 0, iNo2 = 0, iAns = 0;

     printf("Enter first number : \n");
     scanf("%d",&iNo1);

     printf("Enter Second number : \n");
     scanf("%d",&iNo2);



     iAns = Addition(iNo1, iNo2);

     printf("Addition is : %d",iAns);


    return 0;
}

