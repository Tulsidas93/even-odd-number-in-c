#include<stdio.h>                       //header file decleration

int main()
{
    int num;                           // veriabel Decleration
     printf("Enter number ");          // print statment
     scanf("%d" , &num);               // read input number from keypad
     
     if (num % 2==0)                   // check wether number is even or not
     {
        printf("number is Even");      //if even print this line
        }
     else {
        printf("number is odd");       // if odd print this line
     }
     return 0;                         

}