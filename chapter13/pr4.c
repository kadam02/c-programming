#include<stdio.h>

#define ALPHA (c>=97 && c<=122 ? UPPER : c)
#define UPPER (c-32)


int main()
{
    char c;
    printf("Enter the letter to convert it into uppercase :\n");
    scanf("%c",&c);
    printf("Output : %c\n",ALPHA);

    return 0;
}