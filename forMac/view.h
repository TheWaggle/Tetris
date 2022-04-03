#include <stdio.h>
//#include "scoreIO.h"
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

void rankingView(int score){

    printf("あなたのスコア=>%d", score);
    int ranking[] = get_score();
    size_t n = sizeof(ranking)/sizeof(ranking[0]);

    for (int i=0; i < n; i++){
        printf("%d位 : %c\n", i, ranking[i]);
    }
    

}

int gameOverView(int score){
    char buf[12];
    char y;
    printf("Game Over\n");
    printf("あなたのスコア=>%d", score);
    printf("Please Ranking View key push -> y \n");
    scanf("%[y]",&y);

        switch (y){
            case 'y':
                // scoreをキャラ型に変換し、postする
//                post_score("score=%s", itoa(score, buf, 10));
                return true;
            default:
                printf("ランキングを見る場合はyを入力してください。ゲームを終了します。");
                return false;
        };
}