/************************************************
File_Name�Fuser_input.c
************************************************/

#include<stdio.h>
#include<stdlib.h>

// �֐��v���g�^�C�v�錾
unsigned char user_input_purpose_of_use(void);
unsigned char user_input_place_feeling(void);
unsigned char user_input_genre_feeling(void);

/************************************************
Purpose�F���[�U����_���p�p�r(���l������or�厖��������)
return�F���p�p�r�w��l
************************************************/
unsigned char user_input_purpose_of_use(void)
{
    unsigned char purpose_of_use;

    printf("***********************************************\n");
    printf("���p�p�r�������Ă������� \n");
    printf("0:���l�������ŒT�� \n");
    printf("1:�厖���������ŒT�� \n");
    printf("***********************************************\n");
    scanf("%d", &purpose_of_use);

    return purpose_of_use;
}

/************************************************
Purpose�F���[�U����_�n��w��
return�F�n��w��l
************************************************/
unsigned char user_input_place_feeling(void)
{
    unsigned char place_feeling;

    printf("***********************************************\n");
    printf("���̂ǂ̒n��ŒT���܂����H\n");
    printf("0:�~�c \n");
    printf("1:�V�� \n");
    printf("2:��g \n");
    printf("3:�V���E \n");
    printf("4:�V���� \n");
    printf("5:�䓌 \n");
    printf("***********************************************\n");
    scanf("%d", &place_feeling);

    return place_feeling;
}

/************************************************
Purpose�F���[�U����_�W�������w��
return�F�W�������w��l
************************************************/
unsigned char user_input_genre_feeling(void)
{
    unsigned char genre_feeling;

    printf("***********************************************\n");
    printf("���n�̂��X��T���Ă��܂����H \n");
    printf("0:���Ă� \n");
    printf("1:�ē� \n");
    printf("2:����Ԃ���� \n");
    printf("3:�����Ă� \n");
    printf("4:�C�N \n");
    printf("5:���i \n");
    printf("6:���J�c \n");
    printf("7:�V�Ղ� \n");
    printf("8:���̑���i�n�� \n");
    printf("***********************************************\n");
    scanf("%d", &genre_feeling);

    return genre_feeling;
}

