#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<Windows.h>

#include "user_input_if.h"

enum {
    PLACE_FEELING_UMEDA = 0,
    PLACE_FEELING_TEMMA,
    PLACE_FEELING_NAMBA,
    PLACE_FEELING_FUKUSHIMA,
    PLACE_FEELING_JUSO,
    PLACE_FEELING_MAX = PLACE_FEELING_JUSO,
};

enum {
    GENRE_FEELING_KUSHIYAKI = 0,
    GENRE_FEELING_SAEFOOD,
    GENRE_FEELING_TENPRA,
    GENRE_FEELING_NABE,
    GENRE_FEELING_WESTERNFOOD,
    GENRE_FEELING_MAX,
};

// mainルーチン
int main(void)
{
    unsigned char place_feeling = 0;
    unsigned char genre_feeling = 0;
    
    place_feeling = user_input_place_feeling();  // 地域指定

    switch (place_feeling){
        case PLACE_FEELING_UMEDA:
            ShellExecute(NULL,"open","https://tabelog.com/osaka/A2701/A270101/27121652/",NULL,NULL,SW_SHOWNORMAL);
            break;
    
        case PLACE_FEELING_TEMMA:
            ;
            break;
        
        case PLACE_FEELING_NAMBA:
            ;
            break;
        
        case PLACE_FEELING_FUKUSHIMA:
            ;
            break;
        
        case PLACE_FEELING_JUSO:
            ;
            break;

        default:
            printf("不正値が入力されました");
            break;
    }

    return 0;
}