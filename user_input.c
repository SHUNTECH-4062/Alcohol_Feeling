/************************************************
File_Name：user_input.c
************************************************/

#include<stdio.h>
#include<stdlib.h>

// 関数プロトタイプ宣言
unsigned char user_input_purpose_of_use(void);
unsigned char user_input_place_feeling(void);
unsigned char user_input_genre_feeling(void);

/************************************************
Purpose：ユーザ入力_利用用途(少人数向けor主事幹事向け)
return：利用用途指定値
************************************************/
unsigned char user_input_purpose_of_use(void)
{
    unsigned char purpose_of_use;

    printf("***********************************************\n");
    printf("利用用途を教えてください \n");
    printf("0:少人数向けで探す \n");
    printf("1:主事幹事向けで探す \n");
    printf("***********************************************\n");
    scanf("%d", &purpose_of_use);

    return purpose_of_use;
}

/************************************************
Purpose：ユーザ入力_地域指定
return：地域指定値
************************************************/
unsigned char user_input_place_feeling(void)
{
    unsigned char place_feeling;

    printf("***********************************************\n");
    printf("大阪のどの地域で探しますか？\n");
    printf("0:梅田 \n");
    printf("1:天満 \n");
    printf("2:難波 \n");
    printf("3:新世界 \n");
    printf("4:天王寺 \n");
    printf("5:堺東 \n");
    printf("***********************************************\n");
    scanf("%d", &place_feeling);

    return place_feeling;
}

/************************************************
Purpose：ユーザ入力_ジャンル指定
return：ジャンル指定値
************************************************/
unsigned char user_input_genre_feeling(void)
{
    unsigned char genre_feeling;

    printf("***********************************************\n");
    printf("何系のお店を探していますか？ \n");
    printf("0:串焼き \n");
    printf("1:焼肉 \n");
    printf("2:しゃぶしゃぶ \n");
    printf("3:すき焼き \n");
    printf("4:海鮮 \n");
    printf("5:寿司 \n");
    printf("6:串カツ \n");
    printf("7:天ぷら \n");
    printf("8:その他逸品系統 \n");
    printf("***********************************************\n");
    scanf("%d", &genre_feeling);

    return genre_feeling;
}

