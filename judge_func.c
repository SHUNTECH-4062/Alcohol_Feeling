#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// �v���g�^�C�v�錾
extern unsigned char place_feeling_chack(void);

/************************************************
Purpose�F�ǂ��Ɉ��݂ɍs�����`�F�b�N
return�F���ޏꏊ
************************************************/
unsigned char place_feeling_chack(void)
{
    unsigned char place_feeling;

    printf("0:umeda 1:temma 2:namba 3:fukushima 4:juso");
    scanf("%d", &place_feeling);

    return place_feeling;
    
}

