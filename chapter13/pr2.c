#include<stdio.h>

//Here (x,y) are formal parameters

#define SUM(x,y) ((x)+(y))
#define DEFF(x,y) ((x)-(y))
#define PRO(x,y) ((x)*(y))
#define REM(x,y) ((x)%(y))

void main()
{
	int a,b;
	
	a=10;
	b=3;

	//Here (a,b) are actual arguments
	
	printf("Sum of %d and %d is %d\n",a,b,SUM(a,b));
	printf("Difference of %d and %d is %d\n",a,b,DEFF(a,b));
	printf("Product of %d and %d is %d\n",a,b,PRO(a,b));
	printf("Reminder of %d divide by %d is %d\n",a,b,REM(a,b));

}