#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

// �v���g�^�C�v�錾
bool user_input_purpose_of_use(void);
unsigned char user_input_place_feeling(void);
unsigned char user_input_genre_feeling(void);


/************************************************
Purpose�F���[�U����_�n��w��
return�F���݂ɍs�������n��
************************************************/
unsigned char user_input_place_feeling(void)
{
    unsigned char place_feeling;

    printf("0:umeda 1:temma 2:namba 3:fukushima 4:juso");
    scanf("%d", &place_feeling);

    return place_feeling;
    
}

