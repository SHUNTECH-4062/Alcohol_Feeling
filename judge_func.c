#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// プロトタイプ宣言
extern unsigned char place_feeling_chack(void);

/************************************************
Purpose：どこに飲みに行くかチェック
return：飲む場所
************************************************/
unsigned char place_feeling_chack(void)
{
    unsigned char place_feeling;

    printf("0:umeda 1:temma 2:namba 3:fukushima 4:juso");
    scanf("%d", &place_feeling);

    return place_feeling;
}

