#include<stdio.h>
#define ISLOWER(C) (C>=97 && C<=122)                                //checks whether the entered character is lowercase alphabet or not
#define ISUPPER(C) (C>=65 && C<=97)                                 //checks whether the entered character is uppercase alphabet or not
#define ISNUM(C) (C>=48 && C<=57)                                   //checks whether the entered character is number(0 to 9) or not
#define IS_ALPHANUMERIC(C) (ISLOWER(C) ||ISUPPER(C) || ISNUM(C))    //checks whether the entered character is alphanumeric or not

int main()
{
    char ch;
    
    printf("Enter the character to find whether it is alphanumeric or not: ");
    scanf("%c",&ch);

    if(IS_ALPHANUMERIC(ch))   
        printf("Entered character is \"alphanumeric\"\n");
    else               
        printf("Entered character is \"is not alphanumeric\"\n");

        return 0;

}