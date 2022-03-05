#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "libraries/utils.h"

int main(int argc, char** argv){
    printf("argv[1]: %s argv[2]: %s\n", argv[1], argv[2]);
    int range1 = atoi(argv[1]);
    int range2 = atoi(argv[2]);

    for(int i = 1; i <= range1; i++){
    int number =  i;
    bool isDividedByTwo = (number % 2 == 0); 
    printf("iterador: %d\n", i);
    if(!isDividedByTwo) printf("even number: %d\n", number);
    }

    printf("While solution! \n");
    int i = 1;
    while( i <= range2){
        printf("iterador: %d\n", i);
        int number = i;
        bool isDividedByTwo = (number % 2 == 0); 
        if(!isDividedByTwo) printf("odd number: %d\n", number);
        i += 1;
        sleep(1000);
    };

    return 0;
}