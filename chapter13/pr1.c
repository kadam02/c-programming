#include<stdio.h> 
#define MESSG "Welcome\n"   //Here MESSG is the macro_name and "welcome\n" is the macro_expansion

int main()
{
	printf(MESSG);      //MESSG will be replaced by "welcome\n"

 	return (0);
}