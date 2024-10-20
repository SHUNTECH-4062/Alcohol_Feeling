/************************************************
File_Name:judge_open_url.c
************************************************/
#include "resource_url_if.h"

/* �֐��v���g�^�C�v�錾 */
// �O�����J�֐�
void admin_judge_open_url(unsigned char purpose_of_use, unsigned char place_feeling, unsigned char genre_feeling);

// �����֐�
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

/* �񋓌^ */
// ���p�p�r
enum PurposeOfUse {
    PURPOSE_OF_USE_PRIVATE = 0,         // ���l�����p
    PURPOSE_OF_USE_PARTY_ORGANIZE,      // �厖�������p
};

// �n��
enum PlaceFeeling {
    PLACE_FEELING_UMEDA = 0,            // �~�c
    PLACE_FEELING_TEMMA,                // �V��
    PLACE_FEELING_NAMBA,                // �Ȃ��
    PLACE_FEELING_SHINSEKAI,            // �V���E
    PLACE_FEELING_TENNOJI,              // �V����
    PLACE_FEELING_SAKAIHIGASHI,         // �䓌
    PLACE_FEELING_MAX = PLACE_FEELING_SAKAIHIGASHI,
};

// �W������
enum Genre_Feeling {
    GENRE_FEELING_KUSHIYAKI = 0,        // ���Ă�
    GENRE_FEELING_SAEFOOD,              // �C�N
    GENRE_FEELING_TENPRA,               // �V�Ղ�
    GENRE_FEELING_KUSHIKATU,            // ���J�c
    GENRE_FEELING_NABE,                 // ��
    GENRE_FEELING_WESTERNFOOD,          // �m�H
    GENRE_FEELING_MAX = GENRE_FEELING_WESTERNFOOD,
};

/************************************************
Purpose�Fopen_URL�Ǘ�
argument1�F���p�p�r�w��l
argument2�F�n��w��l
argument3�F�W�������w��l
return�FNone
************************************************/
void admin_judge_open_url(unsigned char purpose_of_use, unsigned char place_feeling, unsigned char genre_feeling)
{
    switch (place_feeling) {
        case PLACE_FEELING_UMEDA:   // �~�c
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_umeda_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
                    judge_open_url_place_umeda_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_TEMMA:   //�@�V��
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_temma_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
                    judge_open_url_place_temma_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_NAMBA:   // �Ȃ��
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_namba_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
                    judge_open_url_place_namba_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_SHINSEKAI:   // �V���E
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_shinsekai_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
                    judge_open_url_place_shinsekai_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_TENNOJI:     // �V����
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_tennoji_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
                    judge_open_url_place_tennoji_party_organize(genre_feeling);
                    break;
                default:
                    ;   // do nothing
                    break;
            }
            break;
        case PLACE_FEELING_SAKAIHIGASHI:    // �䓌
            switch (purpose_of_use) {
                case PURPOSE_OF_USE_PRIVATE:
                    judge_open_url_place_sakaihigashi_private(genre_feeling);
                    break;
                case PURPOSE_OF_USE_PARTY_ORGANIZE:
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
Purpose�F�~�c ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
         case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�~�c ���݉�����厖�������p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V�� ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V�� ���݉�����厖�������p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�Ȃ�� ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
************************************************/
void judge_open_url_place_namba_private(unsigned char genre_feeling)
{
    switch (genre_feeling) {
        case GENRE_FEELING_KUSHIYAKI:
            open_url_namba_narutoya();
            break;
        case GENRE_FEELING_SAEFOOD:
            ;
            break;
        case GENRE_FEELING_TENPRA:
            ;
            break;
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            open_url_namba_azito();
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�Ȃ�� ���݉�����厖���� URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V���E ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V���E ���݉�����厖�������p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V���� ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�V���� ���݉�����厖�������p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�䓌 ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}

/************************************************
Purpose�F�䓌 ���݉����񏭐l�����p URL_OPEN����֐�
argument1�F�W�������w��l
return�FNone
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
        case GENRE_FEELING_KUSHIKATU:
            ;
            break;
        case GENRE_FEELING_NABE:
            ;
            break;
        case GENRE_FEELING_WESTERNFOOD:
            ;
            break;
        default:
            ;   // do nothing
            break;
    }
}