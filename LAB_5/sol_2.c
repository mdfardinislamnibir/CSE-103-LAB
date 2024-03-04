#include<stdio.h>
int main()
{
    int a ,result=0, i=1;
    printf("Enter an odd number : " );
    scanf("%d",&a);
    if(a%2 != 0 ){
    while (i<=a ){
        result += i*i;
        i=i+2;
    }
    printf("%d",result);
    }
    else {printf("Program only works for odd numbers");}
    return 0;
}
