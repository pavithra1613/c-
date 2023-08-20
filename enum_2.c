// An example program to demonstrate working
// of enum in C
#include<stdio.h>

enum week{Mon=1, Tue, Wed, Thur=7, Fri, Sat, Sun};

int main()
{
	enum week day;
	day = Mon;
	printf("\nDay of the week is = %d\n ",day);
	day = Fri;
	printf("\nDay of the week is = %d\n ",day);
	return 0;
}

