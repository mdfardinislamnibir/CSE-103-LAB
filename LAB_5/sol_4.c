#include <stdio.h>

int main() {
    int a, i = 1, total = 0;

    printf("Enter a positive number: ");
    scanf("%d", &a);

    while (i < a) {
        if (a % i == 0) {
            total += i;
        }
        i++;
    }
    if (total == a) {
        printf("this is a perfect number." );
    }
     else {
        printf(" this is not a perfect number");
    }
}

