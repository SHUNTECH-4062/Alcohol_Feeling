/************************************************
File_Name:judge_open_url.c
************************************************/
/* 関数プロトタイプ宣言 */
// 外部公開関数
void admin_judge_open_url(unsigned char purpose_of_use, unsigned char place_feeling, unsigned char genre_feeling);

// 内部関数
static void judge_open_url_place_umeda_private(unsigned char genre_feeling);
static void judge_open_url_place_umeda_party_organize(unsigned char genre_feeling);
static void judge_open_url_place_temma_private(unsigned char genre_feeling);
static void judge_open_url_place_temma_party_organize(unsigned char genre_feeling);
static void judge_open_url_place_namba_private(unsigned char genre_feeling);
static void judge_open_url_place_namba_party_organize(unsigned char genre_feeling);
static void judge_open_url_place_shinsekai_private(unsigned char genre_feeling);
static void judge_open_url_place_shinsekai_party_organize(unsigned char genre_feeling);
static void judge_open_url_place_tennoji_private(unsigned char genre_feeling);
static void judge_open_url_place_tennoji_party_organize(unsigned char genre_feeling);
static void judge_open_url_place_sakaihigashi_private(unsigned char genre_feeling);
static void judge_open_url_place_sakaihigashi_party_organize(unsigned char genre_feeling);

/* 列挙型 */
// 利用用途
enum PurposeOfUse {
    PURPOSE_OF_USE_PRIVATE = 0,
    PURPOSE_OF_USE_PARTY_ORGANIZE,
};

// 地域
enum PlaceFeeling {
    PLACE_FEELING_UMEDA = 0,
    PLACE_FEELING_TEMMA,
    PLACE_FEELING_NAMBA,
    PLACE_FEELING_SHINSEKAI,
    PLACE_FEELING_TENNOJI,
    PLACE_FEELING_SAKAIHIGASHI,
    PLACE_FEELING_MAX = PLACE_FEELING_SAKAIHIGASHI,
};

// ジャンル
enum Genre_Feeling {
    GENRE_FEELING_KUSHIYAKI = 0,
    GENRE_FEELING_SAEFOOD,
    GENRE_FEELING_TENPRA,
    GENRE_FEELING_NABE,
    GENRE_FEELING_WESTERNFOOD,
    GENRE_FEELING_MAX,
};

/************************************************
Purpose：open_URL管理
argument1：利用用途指定値
argument2：地域指定値
argument3：ジャンル指定値
return：None
************************************************/
void admin_judge_open_url(unsigned char purpose_of_use, unsigned char place_feeling, unsigned char genre_feeling)
{
    switch (place_feeling) {
        case PLACE_FEELING_UMEDA:   // 梅田
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_umeda_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_umeda_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_TEMMA:   //　天満
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_temma_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_temma_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_NAMBA:   // なんば
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_namba_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_namba_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_SHINSEKAI:   // 新世界
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_shinsekai_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_shinsekai_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_TENNOJI:     // 天王寺
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_tennoji_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_tennoji_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_SAKAIHIGASHI:    // 堺東
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:            // 少人数利用
                    judge_open_url_place_sakaihigashi_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:     // 主事幹事利用
                    judge_open_url_place_sakaihigashi_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose：梅田 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_umeda_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：梅田 飲み屋さん主事幹事利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_umeda_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：天満 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_temma_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：天満 飲み屋さん主事幹事利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_temma_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：なんば 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_namba_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：なんば 飲み屋さん主事幹事 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_namba_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：新世界 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_shinsekai_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：新世界 飲み屋さん主事幹事利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_shinsekai_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：天王寺 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_tennoji_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：天王寺 飲み屋さん主事幹事利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_tennoji_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：堺東 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_sakaihigashi_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}

/************************************************
Purpose：堺東 飲み屋さん少人数利用 URL_OPEN判定関数
argument1：ジャンル指定値
return：None
************************************************/
void judge_open_url_place_sakaihigashi_party_organize(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            ;
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;

    }
}