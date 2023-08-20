//This program is check greatest fo 3 numbers


#include <stdio.h>

int main()
{
	  int x,y,z;
	  printf("Enter the value of x , y and z \n");
	  scanf("%d%d%d",&x,&y,&z);
	  if ( ( x > y) && (x >z)) {
	  	printf(" x = %d is greatest number  \n",x);
	  }
  	  else if ( (y > x) && (y >z)) {
	  	printf(" y = %d is greatest number  \n",y);
        }	
	  else  if ( (z > x) && (z >y)) {
	  	printf(" z = %d is greatest number \n",z);
    	}
  return 0;
}
/*
  1 && 1 = 1
  1 && 0 = 0
  0 && 1 = 0
  0 && 0 = 0*/
