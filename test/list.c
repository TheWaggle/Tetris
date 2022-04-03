#include <stdio.h>
#include <stdlib.h>

int* get_list(void){
    int* ip = NULL;

    ip = (int*)malloc(sizeof(int) * 10);  
    ip[0] = 10;
    ip[1] = 11;
    ip[2] = 9;
    ip[3] = 8;
    ip[4] = 7;
    ip[5] = 6;
    ip[6] = 5;
    ip[7] = 4;
    ip[8] = 3;
    ip[9] = 2;
    
  return ip;  
}

int main(void){
    int* array = NULL;

    array = get_list();
    for(int i = 0; i < 10; i++){
        printf("array[%d] = %d\n", i, array[i]);
    }
    free(array);
}