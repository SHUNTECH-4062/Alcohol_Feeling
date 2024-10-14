/************************************************
File_Name：judge_open_url.c
************************************************/

/* 関数プロトタイプ宣言 */
void judge_open_url(unsigned char purpose_of_use, unsigned char charplace_feeling, unsigned char genre_feeling);

/* 利用用途 */
enum PurposeOfUse {
    PURPOSE_OF_USE_PRIVATE = 0,
    PURPOSE_OF_USE_PARTY_ORGANIZE,
};

/* 地域 */
enum PlaceFeeling {
    PLACE_FEELING_UMEDA = 0,
    PLACE_FEELING_TEMMA,
    PLACE_FEELING_NAMBA,
    PLACE_FEELING_SHINSEKAI,
    PLACE_FEELING_TENNOJI,
    PLACE_FEELING_SAKAIHIGASHI,
    PLACE_FEELING_MAX = PLACE_FEELING_SAKAIHIGASHI,
};

/* ジャンル */
enum Genre_Feeling {
    GENRE_FEELING_KUSHIYAKI = 0,
    GENRE_FEELING_SAEFOOD,
    GENRE_FEELING_TENPRA,
    GENRE_FEELING_NABE,
    GENRE_FEELING_WESTERNFOOD,
    GENRE_FEELING_MAX,
};

/************************************************
Purpose：提案するお店を判定し、該当するWEBサイトを開く
argument1：利用用途指定値
argument2：地域指定指定値
argument3：ジャンル指定値
return：None
************************************************/
void judge_open_url(unsigned char purpose_of_use, unsigned char charplace_feeling, unsigned char genre_feeling)
{
    ;
}