#include<stdio.h>
void main()
{
    float a;
    printf("Enter your number: ");
    scanf("%f",&a);
    if (a>=0){
        if(a>0){printf("you have entered a positive number");}
        else {printf("you have entered zero");}
    }
    else {printf("You have entered a negative number");}
}
