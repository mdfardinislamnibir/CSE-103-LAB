#include<stdio.h>
void main()
{
    float a;
    printf("Enter your number: ");
    scanf("%f",&a);
    if (a==0){printf("you have entered zero");}
    else if (a>0){printf("you have entered positive number");}
    else {printf("You have entered a negative number");}
    return 0;
}

