#include<stdio.h>
void main()
{
    float a,b,result;
    char ch;
    printf("enter what operation you want to do : \n");
    scanf("%c",&ch);
    printf("enter first number : \n");
    scanf("%f",&a);
     printf("enter second number : \n");
    scanf("%f",&b);
    if (ch== '+'){
        result=a+b;
        printf("your addition of the numbers are :%f",result);
    }
    else if (ch== '-'){
     result= a-b;
     printf("the substraction of your numbers are : %f",result);
    }
     else if (ch== '*'){
     result= a*b;
     printf("the multipication of your numbers are : %f",result);}
      else if (ch=='/'){
     result= a/b;
     printf("the division of your numbers are : %f",result);
      }
      return 0;
}
