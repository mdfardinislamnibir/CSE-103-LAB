#include<stdio.h>
void main()
{
    int a;
    printf("enter your mark : ");
    scanf("%d",&a);
    if(a>40)
        {printf("Congratulations! You have passed and ");}
    if(a>=0&&a<=100){

         if(a>=0&& a<40)
         {printf("your grade is F");}
          else if(a>=40&&a<50)
         {printf("You passed and ");}
           else if(a>=50&& a<60)
          {printf("your grade is C");}
           else if(a>=60&& a<70)
          {printf("your grade is B");}
           else if(a>=70&& a<80)
          {printf("your grade is A");}
           else if(a>=80&& a<=100)
          {printf("your grade is A+");}
                                          }
          else{ printf("Enter a valid number.");}

}
