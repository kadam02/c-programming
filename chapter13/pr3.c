#include<stdio.h>
#define PI 3.14
#define AREA_OF_CIRCLE(R) (PI*R*R)

int main()
{
    float r;

    printf("Enter the radius of circle(in cm):");
    scanf("%f",&r);

    printf("Area of circle is :%.2f sq.cm\n",AREA_OF_CIRCLE(r));  /*firstly AREA_OF_CIRCLE will replced by macro expansion(PI*R*R) then again preprocessor 
                                                                     will rescan the program and replaces the macro(PI) with 3.14 */

    return(0);
}