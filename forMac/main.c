#include "view.h"
#include "tetris.h"

#define true 1
#define false 0

int flag = true;

int main(void){
        if(flag == true){ flag = startView(); }
        if(flag == true){ tetris(); }
        if(flag == true){ flag = gameOverView(); }
        if(flag == true){ printf("ランキング\n");}
}