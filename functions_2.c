#include<stdio.h>

void  Function(int);


int main()
{
  
	int x= 10;

	printf("\n  in Main value of x =  %d  \n", x);

	Function(x);

	printf("\n  in Main value of x =  %d  \n", x);

	return 0;

}


void Function(int y)
{
 
	printf("\n in Function value of y =  %d  %p \n", y, &y);
	y = 20;
	printf("\n in Function value of y =  %d  \n", y);
}

