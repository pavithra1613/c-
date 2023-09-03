#include<stdio.h>

struct Student{
		int Roll_No;
		char name[10];
 };


void main()
{

	//ar nn[10];
//	nn[10]= "Lav";

	struct Student student1 = { 1, "Lavanya"};
	struct Student student2 = { 2, "Varsha"};


	printf("\n Student data\n");

	printf("Student1.Roll_No = %d \n",student1.Roll_No)  ;
	printf(" student1.name =%s\n ",   student1.name );

	printf("Student1.Roll_No = %d \n",student2.Roll_No)  ;

	printf(" student2.name =%s\n ",   student2.name );
}

	
