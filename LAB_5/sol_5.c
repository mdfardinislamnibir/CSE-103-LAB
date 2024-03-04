#include<stdio.h>
int main()
{
    int N,i,j, mult;
    printf("Enter number 1 to 10 : ");
    scanf("%d",&N);
    if (N<1 || N> 10)
    {
        printf("Invalid number");

    }
    else{
        i=1;
        while(i<=N)
         {   j=1;
         printf(" %d er namta \n\n",i);
            while(j<=10 )
             {
                mult = i*j;
                printf("  %d * %d =  %d \n",i,j,mult);
                j++;
             }
             i++;
         }
        }
}


