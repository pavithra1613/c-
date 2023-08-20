#include<stdio.h>

int main()
{

	 enum Found {No, yes};
          
	 enum  Found found; 
          
	 int x =20,i;

	 for ( i = 1;i< 20;i++)
	 {
		 if (x == i)
		 {

			 found = yes;
		 }
	 }
	   
	 if (found == yes)
  	 {	
	 	 printf("\n Variable is found\n");
	 }else{
 	         printf("\n Variable  is not  found\n");
  	 }
	 return 0;

}

