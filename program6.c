//write a program which checks number wheather even or odd.

#include<stdio.h>   //for printf and scanf
#include<stdbool.h> // for bool data type

//////////////////////////////////////////////
//function name :  CheckEvenOdd
// Input :         Integer
// Output :         Boolean
// Descripton :     Checks wheather input is even or odd
// Author :         Akanksha kishor kulkarni
// Date :            25/04/2023
//update date :      26/04/2023
//////////////////////////////////////////

bool CheckEvenOdd(int iNo)   //checkEvenOdd()
{
    if((iNo % 2) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}


//////////////////////////////////////////////////////////////////
///Entry point function
////////////////////////////
int main()
{
    int iValue = 0;        //varaiable to accept input
    bool bRet = false;     //variable to accept return value
    printf("Please Enter number to check it is Even or Odd : \n");
    scanf("%d",&iValue);   //function call 

    bRet = CheckEvenOdd(iValue);

    if(bRet == true)
    {
        printf("%d is even number\n",iValue);
    }

    else
    {
        printf("%d is Odd number\n",iValue);
    }

    return 0;
}



