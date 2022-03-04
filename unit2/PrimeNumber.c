#include <stdio.h>

int main()
{
    int n, i ,c = 0;
    printf("enter any number: ");
    scanf("%d", &n);

     //Doing some logic
    for(i = 1; i <= n; i++){
        if( n % i == 0) {
            c++;
        }
    }

    if (c == 2) {
        printf("n is prime number\n");
    } else {
        printf("n is not a prime number\n");
    }
    return 0;
}