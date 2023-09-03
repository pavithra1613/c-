/***********************
 * Program to demonstarte basic bitwise opeations
 * 1. bit wise and
 * 2. bit wise or
 * 3. bitwise not
 * 4. bitwise ex or
 * inputs : integer  x and y 
 * expected outputs: prints bit wise and, bitwise or and bitwise not  
************************************** */
#include <stdio.h>

int main() {

     //Declare variable x and y 
      int x, y ;

     //Read value of x and y
     printf("Enter two  numbers\n");
     scanf("%d%d",&x,&y);
     
     //Printing our out of Bit opeartions
     printf("\n %d Bit wise OR  %d  =  %d\n",x, y,  x | y);
     printf("\n %d Bit wise AND  %d  =  %d\n",x, y,  x & y);
     printf("\n %d Bit wise Ex Or  %d  =  %d\n",x, y,  x ^ y);
     printf("\n  Bit wise NOT of  %u  =   %u \n",x,  ~x);
     

    return 0;
}
