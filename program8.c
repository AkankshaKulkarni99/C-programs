//write a program which accept the maks and display the class accordingly 
// 0 to 34       fail
// 35 to 49      pass
// 50 to 59      second
// 60 to 74      first class 
// 75  to 100     first class with destinction

#include<stdio.h>   //for printf and scanf


void DisplayClass(float fMarks)
{
   if((fMarks < 0.0f) || (fMarks > 100.00f))  //filter
   {
      printf("Invalid Input\n");
      printf("Please enter the marks in between the range 0 to 100");
      return ;
   }

   if((fMarks >= 0.0f) && (fMarks < 35.00f))
   {
      printf("You are fail\n");
   }
   else if((fMarks >= 35.00f) && (fMarks < 50.00f))
   {
      printf("You got pass class\n");
   }

   else if((fMarks >= 50.00f) && (fMarks < 60.00f))
   {
      printf("You got Second class\n");
   }
   else if((fMarks >= 60.00f) && (fMarks < 75.00f))
   {
      printf("You got First class\n");
   }
   else if((fMarks >= 75.00f) && (fMarks < 100.00f))
   {
      printf("You got first class with distinction class\n");
   }
}


int main()
{
   float fValue = 0.0f;

   printf("please enter your percentage : \n");
   scanf("%f",&fValue);

   DisplayClass(fValue);

   return 0;
}



