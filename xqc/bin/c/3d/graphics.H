/************************************************************
  FileName: graphics.h
        �豸�޹ص�ͼ�κ����ӿ�  
***********************************************************/
#ifndef _GRAPHICS
#define _GRAPHICS

void init_graph();            /* ��ʼ��ͼ��ģʽ */
void close_graph();             /* �ر�ͼ��ģ�� */
void set_color(XM_COLOR color);      /* ������ɫ */
void set_fillcolor(XM_COLOR color);       /* ���������ɫ */
void put_pixel(int x, int y, XM_COLOR color);        /* ��һ���� */
void put_line(int x1, int y1, int x2, int y2);        /* ��һ���� */
void put_polyline(XM_POINT2D *ps, int n);         /* �����ε��� */
void put_polygon(XM_POINT2D *ps, int n);        /* ��һ�����Ķ���� */

void put_rectangle(int left, int top, int right, int bottom);    /* ��һ������ */
void set_clip_rectangle(int left, int top, int right, int botton);/* ���òü����� */
void flush_graph();/*�ѻ�������������ʾ����Ļ��*/

#endif