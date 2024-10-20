/************************************************
File_Name:resource_url.c
************************************************/
#include <stdlib.h>

/* 関数プロトタイプ宣言 */
// 外部公開関数
// なんば_少人数向け利用
void  open_url_namba_narutoya();
void  open_url_namba_azito();

// 内部関数


/************************************************
Purpose：なんば_なるとや_open_URL
argument：None
return：None
************************************************/
void open_url_namba_narutoya()
{
     system("start https://tabelog.com/osaka/A2701/A270202/27099675/");
}

/************************************************
Purpose：なんば_あじと_open_URL
argument：None
return：None
************************************************/
void open_url_namba_azito()
{
     system("start https://www.dining-ajito.com/");
}