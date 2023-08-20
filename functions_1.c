#include<stdio.h>

int Maxof(int,int);


int main()
{
   
int x= 10, y=20;

int z = Maxof(x,y);

printf("\n Max of %d and %d = %d \n", x, y,z);

return 0;


}

int Maxof(int a, int b)
{

return (a > b? a : b);

}

