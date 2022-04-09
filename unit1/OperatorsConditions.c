#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//Temperature with conditions//
//cold: 15
//Hot: 29
int cold = 16;
int hot = 29;
int sofa = 7000;


int main(int argc, char**argv){
    int inputTemp = atoi(argv[1]);
    int inputMoney = atoi(argv[2]);
    char inputName = argv[3][0]; //-->"F"---> {'F','e','m','a','l,'e', '\0'}
    bool temperature_condition = (inputTemp == cold);
    bool temperature_codition2= (inputTemp == hot);
    bool temperature_condition3 = (inputTemp >= hot);
    bool canRobotMove = (inputTemp <= hot);
    bool hasUserMoney = (inputMoney >= sofa);
    bool isUserMale = (inputName != 'F');

    if(canRobotMove){
        //Robot.move(x_coord, y_coord);
    }else{
        //Robot.stop(x_coord, y_coord);
    }
    
    if(hasUserMoney){
        //User can buy
    }else{
        //User can't but
    }

    if (inputTemp <= 29){
        //Robot.move(x_axis, y_axis);
    }else{
        //Robot stop(x_axis, y_axis);
    }
    
    return 0;
}