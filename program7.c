//write a program which checks number wheather number is divisible by 3 and 5

#include<stdio.h>   //for printf and scanf
#include<stdbool.h> // for bool data type

//////////////////////////////////////////////
//function name :  CheckDivisible
// Input :         Integer
// Output :         Boolean
// Descripton :     Checks wheather input is Divisible by 3 or 5
// Author :         Akanksha kishor kulkarni
// Date :            25/04/2023
//update date :      26/04/2023
//////////////////////////////////////////

bool CheckDivisible(int iNo)   //checkEvenOdd()
{
    if(  (iNo % 3 == 0) && (iNo % 5 == 0))
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
    printf("Please Enter number to check it is divisible by 3 AND 5 : \n");
    scanf("%d",&iValue);   //function call 

    bRet = CheckDivisible(iValue);

    if(bRet == true)
    {
        printf("%d is completely divisible by 3 and 5\n",iValue);
    }

    else
    {
        printf("%d is not is completely divisible by 3 and 5\n",iValue);
    }

    return 0;
}



