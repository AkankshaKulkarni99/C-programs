// display "1 to 5" from 5 times on screen 

#include<stdio.h>
// example of for loop

void Display(int iNo)
{

    int iCnt = 0;

    if(iNo < 0)  //filter for negative input
    {
        printf("Error : Invalid Input.\n");
        printf("Note : please enter positive number\n");
        return;
    }


    for(iCnt = 1; iCnt <= iNo; iCnt++)

    {

    printf("%d\n",iCnt);

    }

}
int main()
{

    int iValue = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iValue);
    Display(iValue);

  return 0;

}

