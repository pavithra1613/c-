//Simple calcualtor
//
//
#include<stdio.h>
int main()
{
	double x, y;
	char operator;
	printf("Enter operator ( +, - ,*, /) \n");
	scanf("%c", &operator);
	printf("Enter two operands \n");
	scanf("%lf%lf",&x, &y);
	switch (operator)
	{       
		case '+': printf("Addition of two operands  is =  %lf \n ", x+y);  
			 
                          break;
		case '-': printf("subtraction of two operands  is =  %lf \n ", x - y);  
			 break;

		case '*': printf("product of two operands  is = %lf\n ", x*y);  
			 break;
	
		case '/': printf("division of two operands  is = %lf \n ", x / y);  
			 break;

		default:printf("Please enter operator ( +, - ,*, /) \n");
			break;

	}		  
	return 0;
}

