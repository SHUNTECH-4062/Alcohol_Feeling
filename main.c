/************************************************
File_Name：main.c
************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<Windows.h>

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
    
    purpose_of_use = user_input_purpose_of_use();       // 利用用途指定
    place_feeling = user_input_place_feeling();         // 地域指定
    genre_feeling = user_input_genre_feeling();         // ジャンル指定

    admin_judge_open_url(purpose_of_use, place_feeling, genre_feeling);

    return 0;
}