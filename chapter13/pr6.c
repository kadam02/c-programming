#include<stdio.h>
#define SWAP(DTYPE,X,Y) {DTYPE T; T=X, X=Y, Y=T;}    //we declare variable T local for macro 
int main()
{
    int a,b;
    a=10;
    b=20;

    printf("a=%d\nb=%d\n",a,b);
    SWAP(int,a,b)
    printf("a=%d\nb=%d\n",a,b);

    return 0;

}