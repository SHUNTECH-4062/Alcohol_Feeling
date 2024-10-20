/************************************************
File_Name�Fuser_input.c
************************************************/
#include<stdio.h>
#include<stdlib.h>

/* �֐��v���g�^�C�v�錾 */
// �O�����J�֐�
void admin_user_input(unsigned char *purpose_of_use, unsigned char *place_feeling, unsigned char *genre_feeling);

// �֐��v���g�^�C�v�錾
static unsigned char user_input_purpose_of_use(void);
static unsigned char user_input_place_feeling(void);
static unsigned char user_input_genre_feeling(void);


/************************************************
Purpose�Fopen_URL�Ǘ�
argument1�F���p�p�r�w��l
argument2�F�n��w��l
argument3�F�W�������w��l
return�FNone
************************************************/
void admin_user_input(unsigned char *purpose_of_use, unsigned char *place_feeling, unsigned char *genre_feeling)
{
    *purpose_of_use = user_input_purpose_of_use();
    *place_feeling = user_input_place_feeling();
    *genre_feeling = user_input_genre_feeling();
}

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
    printf("1:�C�N \n");
    printf("2:�V�Ղ� \n");
    printf("3:���J�c \n");
    printf("4:�� \n");
    printf("5:�m�H \n");
    printf("8:���̑���i�n�� \n");
    printf("***********************************************\n");
    scanf("%d", &genre_feeling);

    return genre_feeling;
}

