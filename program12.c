// display "jay ganesh" from 5 times on screen 

#include<stdio.h>
void Display(int iNo)
{
    int iCnt = 0;

  //       1           2         3
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
    
    printf("Jay Ganesh...\n");

    }
}


int main()
{
   
    int iValue = 0;

    printf("Enter the frequency of jay ganesh statement : \n");
    scanf("%d",&iValue);

    Display(iValue);   // function call
    return 0;
}

