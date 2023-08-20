#include<stdio.h> 

void main() 
{ 
	int x = 5, i=15, y=2 ;

	for( ; i > x ; )
	{
		printf("inside Loop Value of i = %d \n", i-- );
	//	i = i + y;
	  //      y = i+y;
	}


        printf("in Main i = %d\n",i);
}
