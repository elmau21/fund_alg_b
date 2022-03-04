#include <stdio.h>
#include <stdlib.h>

//* Global Variables*//
char* date = "02-02-22T1010:25:00z";
///////////////////////////////////////

//Ejecucion del programa///

int main (){
    date = "02-03-22T1010:25:00z";
    int hours = 22;//%Local:main
    float pi = 3.1415;//%f
    char character = 'c';//%c
    char* name = "Mau";//%s
    int address = &hours; //%p print pointer
    printf("hours: %d\n", hours, name);
    return 0;
}
