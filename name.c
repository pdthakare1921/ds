#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


struct stack
{
    char first[20];
    char middle[20];
    char last[20];
};

struct stack *top=NULL;




void main(){

    char first[50],middle[50],last[50];
    printf("Enter First name, middle name, and Last name: \n");
    scanf("%s\n%s\n%s\n",&first,&middle,&last);
    printf("Entered name is : \n");
    printf("%s\t%s\t%s\n");
    



   


}