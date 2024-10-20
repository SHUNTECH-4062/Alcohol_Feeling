/************************************************
File_Name：main.c
************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#include "user_input_if.h"
#include "judge_open_url_if.h"

// mainルーチン
int main(void)
{
    unsigned char purpose_of_use = 0;
    unsigned char place_feeling = 0;
    unsigned char genre_feeling = 0;

    printf("***********************************************\n");
    printf(" SHUN_TECHおすすめの大阪の飲み屋さんを提案します。\n");
    printf("***********************************************\n");
    
    // ユーザ入力
    admin_user_input(&purpose_of_use, &place_feeling, &genre_feeling);

    // open_URL
    admin_judge_open_url(purpose_of_use, place_feeling, genre_feeling);

    return 0;
}