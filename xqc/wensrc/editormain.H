#ifndef _EDITORMAIN_H
#define _EDITORMAIN_H


///////////////////////////////////////
enum Windows{
	EDITOR,//�༭��
	MAINMENU,//���˵�
	FILEVIEW,//�ļ����
	SETING//����
};

int32 memdir(const char* dst,const char* dirName);


#define mallocchar(text) strcpy(malloc(strlen(text)+1),text)
#define Malloc(len) mrc_memset(mrc_malloc(len),0,len)
//������ɫ��ʼ��
int32 ColInit(void);
//���ļ����ã��ļ��к��ļ����ϳɵ��򿪵��ļ���
void EditFile(char *path,char *name);
//�����ĵ�
int SaveFile(void);
//��mrp���ļ�ֱ��д���ļ�
int fileaz(char *mrpfile,char *file);
//�������ļ���
int az(void);
//�����༭�򷵻ؾ��
int32 MyCreate(char *title,char *text,int type,int len);
//����mrp
int32 runmrps(char *name);
//��ʱ����
void Debugging(void);
//��������
int IniSetSave(void);

void editorinit(void);


#endif