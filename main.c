/************************************************
File_Name�Fmain.c
************************************************/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>
#include<Windows.h>

#include "user_input_if.h"
#include "judge_open_url_if.h"

// main���[�`��
int main(void)
{
    unsigned char purpose_of_use = 0;
    unsigned char place_feeling = 0;
    unsigned char genre_feeling = 0;

    printf("***********************************************\n");
    printf(" SHUN_TECH�������߂̑��̈��݉�������Ă��܂��B\n");
    printf("***********************************************\n");
    
    purpose_of_use = user_input_purpose_of_use();       // ���p�p�r�w��
    place_feeling = user_input_place_feeling();         // �n��w��
    genre_feeling = user_input_genre_feeling();         // �W�������w��

    admin_judge_open_url(purpose_of_use, place_feeling, genre_feeling);

    return 0;
}