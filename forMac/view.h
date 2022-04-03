#include <stdio.h>
#define true 1
#define false 0


int startView(void){
char y;
printf("テトリス\n");
    printf("Please Start key push -> y \n");
    scanf("%[y]",&y);

    switch (y){
        case 'y':
            return true;
        default:
            printf("開始する場合はyを入力してください。ゲームを終了します。");
            return false;
    };

}

void rankingView(char** score){

}

int gameOverView(void){
    char y;
    printf("Game Over\n");
        printf("Please Ranking View key push -> y \n");
        scanf("%[y]",&y);

        switch (y){
            case 'y':
                return true;
            default:
                printf("ランキングを見る場合はyを入力してください。ゲームを終了します。");
                return false;
        };
}