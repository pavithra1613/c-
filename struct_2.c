#include<stdio.h>

struct Ex{
		int i;
		char c;
 };


void main()
{

	struct Ex x[2];
	
	x[1].i =10;
	x[1].c = 'a';

	x[2].i =20;
	x[2].c = 'b';

	printf("Struct x[1].i = %d\n",x[1].i);
	printf("Struct x[1].c = %c\n\n",x[1].c);
	
	printf("Struct x[2].i = %d\n",x[2].i);
	printf("Struct x[2].c = %c\n",x[2].c);
}

	
