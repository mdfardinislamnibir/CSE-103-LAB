#include <stdio.h>
int main()
{
    int a,b=0,i=2;
    printf("Enter any number : ");
    scanf("%d",&a);
    while (i<a)
    { if (a%i==0){
        b++;}
      i++;
    }
 if (b>0)
    {printf(" %d is not a prime number",a);}
 else printf("%d is a prime number",a);
}
