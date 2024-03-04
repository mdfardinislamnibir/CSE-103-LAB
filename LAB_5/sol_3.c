#include<stdio.h>
int main()
{
 int a, result=0,i=4;
 printf("enter the range of the series: ");
 scanf("%d",&a);
 while(i<=a){
    result +=i;
    i=i+3;
 }
 printf("%d",result);
}
